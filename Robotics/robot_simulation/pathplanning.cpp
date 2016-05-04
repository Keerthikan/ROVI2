#include "pathplanning.hpp"


pathPlanning::pathPlanning(string wcFile, string deviceName)
{
    this->wcFile = wcFile;
    this->deviceName = deviceName;
    this->workcell = rw::loaders::WorkCellLoader::Factory::load(wcFile);
    this->device = workcell->findDevice(deviceName);

    if (device == NULL)
    {
        std::cerr << "Device: " << deviceName << " not found!" << std::endl;
        exit(0);
    }

    this->state = workcell->getDefaultState();
    this->detector = new CollisionDetector(workcell, ProximityStrategyFactory::makeDefaultCollisionStrategy());
    cout << this->device->getQ(this->state) << endl;


    //--------------------------------------------------------
    rw::kinematics::Frame* toolFrame = device->getEnd();
    this->toolFrame = toolFrame;
    cout << toolFrame->getName() << endl;
    //--------------------------------------------------------

    cout << "--loaded" << endl;
    cout << endl;

}



bool pathPlanning::collision(Q q)
{

    device->setQ(q, state);
    CollisionDetector::QueryResult data;
    return detector->inCollision(state,&data);

}




pair<Q,Q> pathPlanning::colision_free_Q()
{
    //Robwork  generate random collision free Start and end point.
    rw::math::Math::ranQ(this->device->getBounds());
//    rw::math::Math::seed();
    rw::pathplanning::QSampler::Ptr q1;
    rw::pathplanning::QSampler::Ptr q2;

    //Test if start or end configuration is collision free
    bool collision = true;
    Q start;
    Q end;

    while(collision)
    {
        rw::math::Math seed();
        bool a = false;
        bool b = false;
        Q tempQ1 = q1.get()->makeUniform(device).get()->sample();
        Q tempQ2 = q2.get()->makeUniform(device).get()->sample();
       // cout << tempQ1 << tempQ2 << endl;
        start = tempQ1;
        end = tempQ2;
        a = this->collision(start);
        b = this->collision(end);
        collision = (a||b);
        //cout << a << b << endl;
    }
    //cout << start << end << endl;
    return make_pair(start,end);
}


rw::math::Q pathPlanning::invKin(double dx, double dy , double dz)
{

    rw::kinematics::State state =  this->state;
    rw::math::Transform3D<> t_tool_base =  this->device.get()->baseTframe(this->toolFrame,state);


    Eigen::MatrixXd jq(this->device.get()->baseJframe(this->toolFrame,state).e().cols(), this->device.get()->baseJframe(this->toolFrame,state).e().rows());
    jq =  this->device.get()->baseJframe(this->toolFrame,state).e();

    //cout << "Determinant: " <<rw::math::LinearAlgebra::det(jq) << endl;

    //Least square solver - dq = [j(q)]T (j(q)[j(q)]T)⁻1 du  <=> dq = A*du
    Eigen::MatrixXd A (6,6);
    //A = jq.transpose()*(jq*jq.transpose()).inverse();
    A = (jq*jq.transpose()).inverse()*jq.transpose();

    std::vector<rw::math::Transform3D<> > out = sphere(dx,dy,dz);

    std::ofstream outfile;
    outfile.open("q_conf.txt", std::ios_base::app);
    cout << "invKin" << endl;
    for(unsigned int i = 0; i <= out.size() ; ++i )
    {
        cout << "\r"+to_string(i);

        rw::math::Vector3D<> dif_p = out[i].P()-t_tool_base.P();

        Eigen::Matrix3d dif = out[i].R().e()- t_tool_base.R().e();
        rw::math::Rotation3D<> dif_r(dif);
        rw::math::RPY<> dif_rot(dif_r);

        Eigen::VectorXd du(6);
        du(0) = dif_p[0];
        du(1) = dif_p[1];
        du(2) = dif_p[2];

        du(3) = dif_rot[0];
        du(4) = dif_rot[1];
        du(5) = dif_rot[2];

        Eigen::VectorXd q(6);
        q = A*du;

        rw::math::Q q_current;
        q_current = this->device->getQ(this->state);
        rw::math::Q dq(q);
        rw::math::Q q_new = q_current+ dq;
        if(!collision(q_new) && !within_bound(q_new))
        {
            std::string text = "setQ{"  + to_string(q_new[0])  + ", " + to_string(q_new[1]) + ", " + to_string(q_new[2]) + ", " + to_string(q_new[3]) + ", " + to_string(q_new[4]) + ", " + to_string(q_new[5]) + "}";
            //cout << text << endl;
            outfile << text << endl;
        }
        else
        {
            cout << endl;
            //cout << "\rfalse";
            //cout << "collision" << endl;
        }

    }

    rw::math::Q bla(6); //Just used the text file for debugging purposes,  Which why I just return a random Q config.
    return bla;
}

rw::math::Q pathPlanning::invKin()
{
    //Made fo testing purposes, move to state.

    rw::math::Transform3D<> t_end_base = this->device->baseTframe(this->toolFrame,this->state);
    double x = t_end_base.P()[0];
    double y = t_end_base.P()[1];
    double z = t_end_base.P()[2];

   // rw::math::RPY<> rot(t_end_base.R());
   // cout << x << " , " << y << " , " << z << endl;
   // cout << rot[0]*(180/M_PI) << " , " << rot[1]*(180/M_PI)  << " , " <<  rot[2]*(180/M_PI) << endl;
    rw::math::Q out = invKin(x,y,z);
    return out;
}

void pathPlanning::setQ(rw::math::Q q_new)
{
    //cout << "New Q configuration" << endl;

    this->device->setQ(q_new,this->state);
    rw::math::Q newQ = this->device->getQ(this->state);

    //rw::math::Transform3D<> t_end_base = this->device->baseTend(this->state);
    //cout << "New t_end_base!" << endl;
    //cout << endl;
    //cout << t_end_base << endl;
    //cout << endl;
    //cout << "setQ{"<< newQ[0]<< "," << newQ[1]<< ","<< newQ[2]<< ","<< newQ[3]<< ","<< newQ[4]<< "," << newQ[5] <<"}"<< endl;
    //cout << endl;
}

rw::math::Q pathPlanning::getQ()
{
    cout << endl;
    return this->device->getQ(this->state);
}

std::vector<rw::math::Transform3D<>> pathPlanning::sphere(double dx, double dy, double dz)
{
    double r = 0.50; // Radius of the sphere -  set to 0.50 cm (TODO: has to be checked if that also is accurate)
    cout << "Create a sphere" << endl;

    double current_x = this->device->baseTframe(this->toolFrame,this->state).P()[0];
    double current_y = this->device->baseTframe(this->toolFrame,this->state).P()[1];
    double current_z = this->device->baseTframe(this->toolFrame,this->state).P()[2];

    rw::math::Vector3D<> center(current_x + dx, current_y + dy , current_z + dz);

    // Formula for sphere (x-x0)²+(y-y0)²+(z-z0)²=r²
    // x: x = x_0 + rcos(theta)sin(phi)
    // y: y = y_0 + rsin(theta)sin(phi)
    // z: z = z_0 + rcos(phi)
    // Angle range: 0 <= theta <= 2M_PI ; 0 <= phi <= M_PI

    double obj_x = current_x + dx;
    double obj_y = current_y + dy;
    double obj_z = current_z + dz;

   // ofstream positions;
   // ofstream rotations_z;
   // ofstream rotations_y;
   // ofstream rotations_x;
   // positions.open ("sphere_positions.csv");
   // rotations_z.open("z_dir.csv");
   // rotations_y.open("y_dir.csv");
   // rotations_x.open("x_dir.csv");
    std::vector<rw::math::Transform3D<>> out;

    int count = 32;

    for(double azimuthal = 0; azimuthal <= M_PI ; azimuthal+=1 )
    {

        for(double polar = 0; polar <= M_PI ; polar+=1.05 )
        {

            double sphere_x = obj_x + r*cos(azimuthal)*sin(polar);
            double sphere_y = obj_y + r*sin(azimuthal)*sin(polar);
            double sphere_z = obj_z + + r*cos(polar);

            //string text = to_string(sphere_x) + " , " + to_string(sphere_y)+ " , " + to_string(sphere_z);
            //positions << text << endl;

            rw::math::Transform3D<> transformation_matrix = transform(obj_x,obj_y,obj_z,sphere_x,sphere_y,sphere_z);
            if(0.01<(transformation_matrix.P()[0] - current_x) || 0.01<transformation_matrix.P()[1] - current_y || 0.01<transformation_matrix.P()[2] - current_z)
            {
                cout << "Interpolate: " << endl;
                cout << endl;
                cout << "current: " << endl;
                cout << this->device->baseTframe(this->toolFrame,this->state).R().e() << endl;

                cout << "desired: " << endl;
                cout << transformation_matrix.R().e() << endl;

                std::vector<rw::math::Transform3D<>> transformation_i = invKin_LargeDisplacement(transformation_matrix);
                out.insert(out.end(),transformation_i.begin(),transformation_i.end());
                cout << out.size() << endl;
                cout << "only returning one interpolation onto the sphere!" << endl;

                return transformation_i;

            }
            else
            {
                cout << "OK" << endl;
                out.push_back(transformation_matrix);

            }

   //        string text2 = to_string(transformation_matrix.R().e()(0,2    std::ofstream outfile;
   //        string text1 = to_string(transformation_matrix.R().e()(0,1)) + " , "  + to_string(transformation_matrix.R().e()(1,1)) + " , " + to_string(transformation_matrix.R().e()(2,1));
   //        string text0 = to_string(transformation_matrix.R().e()(0,0)) + " , "  + to_string(transformation_matrix.R().e()(1,0)) + " , " + to_string(transformation_matrix.R().e()(2,0));

   //        rotations_z << text2 << endl;
   //        rotations_y << text1 << endl;
   //        rotations_x << text0 << endl;

            if(count == 32) //TODO: Why...... is this occuring?
            {
                //cout << "Theta: " << theta << " Phi: " << phi << endl;
                //cout << sphere_x << " , " << sphere_y <<" , "<< sphere_z << endl;
                count = 0;
            }
            else
            {
                count++;
            }
            cout << out.size() << endl;
            cout << sizeof(rw::math::Transform3D<>) << endl;
        }
    }

    //positions.close();
    //rotations_z.close();
    //rotations_y.close();
    //rotations_x.close();
    //cout << endl;
    //cout <<"Object at: " << obj_x << "," << obj_y << "," << obj_z << endl;


    return out;
}

rw::math::Transform3D<> pathPlanning::transform(double obj_x, double obj_y, double obj_z, double sphere_x, double sphere_y ,double sphere_z)
{
    // Z-axis should be oriented towards the object.
    // Rot consist of 3 direction vector [x,y,z] which describes how the axis should be oriented in the world space.
    // Looking at the simulation the z-axis is the camera out. X, and Y describes the orientation of the camera.
    // The vector are only for direction purposes, so they have to be normalized....
    // TODO: case [0  0 -1]... Why is it happening at what can be done to undo it?

    rw::math::Vector3D<> dir_z((obj_x - sphere_x), (obj_y - sphere_y), (obj_z - sphere_z));
    dir_z = normalize(dir_z);
    rw::math::Vector3D<> downPlane(0.0,0.0,-1.0);
    rw::math::Vector3D<> dir_x = cross(downPlane,dir_z);
    dir_x = normalize(dir_x);
    rw::math::Vector3D<> dir_y = cross(dir_z,dir_x);
    dir_y = normalize(dir_y);

    rw::math::Rotation3D<> rot_out (dir_z,dir_y,dir_x);  // [x y z]

    rw::math::Vector3D<> pos_out(sphere_x,sphere_y,sphere_z);

    rw::math::Transform3D<> out(pos_out,rot_out);
    return out;
}

bool pathPlanning::singularity()
{
    Eigen::MatrixXd jq(this->device.get()->baseJframe(this->toolFrame,this->state).e().cols(), this->device.get()->baseJframe(this->toolFrame,this->state).e().rows());
    jq =  this->device.get()->baseJframe(this->toolFrame,this->state).e();


    if(rw::math::LinearAlgebra::det(jq)> 0.01)
    {
        return true;
    }
    else
    {
        //cout << "Determinant: " <<rw::math::LinearAlgebra::det(jq) << endl;
        return false;
    }
}

std::vector<rw::math::Transform3D<>> pathPlanning::invKin_LargeDisplacement(rw::math::Transform3D<> t_tool_base_desired)
{

    rw::math::Transform3D<> t_tool_base_current =  this->device.get()->baseTend(this->state);
    //  Equidistant interpolation:
    //  dividing path between current and desired into small i_desired
    //  P_tool_base_desired-i =   p_tool_base_current + i/m (P_base_tool_desired - p_tool_base_current)
    //  M - Eq: 4.25 in robotics book..  To complex to write myself!
    //  From M we need to define θV (desired equivalent angle axis), and tesselation = 0.01

    double tesselation = 0.05;
    double ws = 0.1;
    // May have to be changed... text book defintion - "where W S denotes some (possibly rather crude) estimate of the size of the
    // positional part of the workspace that the robot can reach"

    //rotational change = t_tool_base_desired * t_tool_current.R.Transpose()
    Eigen::Matrix3d rotational_change;
    rotational_change = t_tool_base_desired.R().e() * t_tool_base_current.R().e().transpose();
    //cout << rotational_change << endl;
    //find Wrot
    Eigen::Vector3d W_rot;
    W_rot << 1 ,1 ,1 ;
    double normalized_axis_vector_0 = rotational_change(2,1) - rotational_change(1,2);
    double normalized_axis_vector_1 = rotational_change(0,2) - rotational_change(2,0);
    double normalized_axis_vector_2 = rotational_change(1,0) - rotational_change(0,1);

    double angle_of_rotation = acos((rotational_change.trace() - 1)/2);
    double normalized_axis = 1/(2*sin(angle_of_rotation));


    //Check for singularities?
    if(angle_of_rotation == 0)
    {
        // eq: 4.19
        cout << "Due to singularity use this formula" << endl;
        W_rot(0) = 0.5*normalized_axis_vector_0;
        W_rot(1) = 0.5*normalized_axis_vector_1;
        W_rot(2) = 0.5*normalized_axis_vector_2;
    }
    else if(angle_of_rotation == M_PI)
    {
          //A bit more invovled.. Basically eq:4.20
          // Bit unsure what is meant by ||(R_32 - R_23), (R_13 - R_31)||
        cout << "Angle of rotation is M_PI, NOT implemented yet!" << endl;
        Eigen::Vector3d normalized_axis_vector;
        normalized_axis_vector << normalized_axis_vector_0 , normalized_axis_vector_1 , normalized_axis_vector_2;
        angle_of_rotation = M_PI - (normalized_axis_vector.norm())/2;
        //How to normalized axis.. the alpha part is tricky?

    }
    else
    {
        // eq: 4.18
        W_rot(0) = angle_of_rotation*normalized_axis*normalized_axis_vector_0;
        W_rot(1) = angle_of_rotation*normalized_axis*normalized_axis_vector_1;
        W_rot(2) = angle_of_rotation*normalized_axis*normalized_axis_vector_2;
    }

    //equivalent angle axis found as Wrot.

    double normed_positional_change = (t_tool_base_desired.P().e() - t_tool_base_current.P().e()).norm()/ws;
    double normed_angle_axis_rotation = W_rot.norm()/M_PI;
    double M = trunc(((1/tesselation)*(normed_positional_change + normed_angle_axis_rotation))+1);
    std::vector<rw::math::Transform3D<>> t_tool_base_desired_i;

    std::ofstream outfile_p;
    std::ofstream outfile_r;
    outfile_p.open("interpolate_p.txt", std::ios_base::app);
    outfile_r.open("interpolate_r.txt", std::ios_base::app);
    for(double i = 1; i <= M ; i += 1 )
    {
        rw::math::Vector3D<> position_desired_i = t_tool_base_current.P() + (i/M)*(t_tool_base_desired.P()-t_tool_base_current.P());
        outfile_p << position_desired_i.e()[0] << "," << position_desired_i.e()[1] << "," << position_desired_i.e()[2] << endl;
        Eigen::Vector3d v;
        v << normalized_axis_vector_0 , normalized_axis_vector_1 , normalized_axis_vector_2;
       // cout << normalized_axis_vector_0 << normalized_axis_vector_1 << normalized_axis_vector_2 << endl;
        v = normalized_axis * v; //* (i/M);
        angle_of_rotation = angle_of_rotation*(i/M);

        Eigen::Matrix3d R_eaa;

          double _0_0 = pow(v(0),2.0)*(1-cos(angle_of_rotation))+cos(angle_of_rotation);
          double _0_1 = v(0)*v(1)*(1-cos(angle_of_rotation))-v(2)*sin(angle_of_rotation);
          double _0_2 = v(0)*v(2)*(1-cos(angle_of_rotation))+v(1)*sin(angle_of_rotation);
          double _1_0 = v(0)*v(1)*(1-cos(angle_of_rotation))+v(2)*sin(angle_of_rotation);
          double _1_1 = pow(v(1),2.0)*(1-cos(angle_of_rotation))+cos(angle_of_rotation);
          double _1_2 = v(1)*v(2)*(1-cos(angle_of_rotation))*v(0)*sin(angle_of_rotation);
          double _2_0 = v(0)*v(2)*(1-cos(angle_of_rotation))-v(1)*sin(angle_of_rotation);
          double _2_1 = v(1)*v(2)*(1-cos(angle_of_rotation))+v(0)*sin(angle_of_rotation);
          double _2_2 = pow(v(2),2)*(1-cos(angle_of_rotation))+ cos(angle_of_rotation);

        R_eaa <<  _0_0 , _0_1 , _0_2 ,
                  _1_0 , _1_1 , _1_2 ,
                  _2_0 , _2_1 , _2_2;

        Eigen::Matrix3d rotation_desired_i_eigen = R_eaa*t_tool_base_current.R().e();
        rw::math::Rotation3D<> rotation_desired_i(rotation_desired_i_eigen);
        outfile_r << rotation_desired_i.e() << endl << endl;
        rw::math::Transform3D<> transform_i(position_desired_i,rotation_desired_i);
        t_tool_base_desired_i.push_back(transform_i);

    }

    return  t_tool_base_desired_i;

}

void pathPlanning::invKin_LargeDisplacement()
{
    //Made for testing
    rw::math::Transform3D<> t_tool_base_current =  this->device.get()->baseTend(this->state);
    invKin_LargeDisplacement(t_tool_base_current);

}


bool pathPlanning::within_bound(rw::math::Q input)
{
    rw::math::Q q_min = this->device->getBounds().first;
    rw::math::Q q_max = this->device->getBounds().second;


    //cout << endl;
    //cout << "\r" + to_string(input[0]);

    if( ((input[0] > q_min[0]) && (input[1] > q_min[1]) && (input[2] > q_min[2]) && (input[3] > q_min[3]) && (input[4] > q_min[4]) && (input[5] > q_min[5])) ||(
            (input[0] < q_max[0]) && (input[1] < q_max[1]) && (input[2] < q_max[2]) && (input[3] < q_max[3]) && (input[4] < q_max[4]) && (input[5] < q_max[5])) )
    {
        //cout << endl;
        cout << "\r"<<"true";
        return true;
    }
    else
    {
        //cout << "False" << endl;
        return false;
    }
}
