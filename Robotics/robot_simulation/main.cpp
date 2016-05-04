#include <iostream>
#include "pathplanning.hpp"

using namespace std;

int main()
{

    string wcFile = "/home/keerthikan/robot_simulation/WorkStation2/WS2_Scene.wc.xml";
    string deviceName = "UR1";

    pathPlanning path(wcFile,deviceName);


    double x = 0;
    double y = 0;
    double z = 105.0;

////    double q0 = -14.045*0.0174532925;
////    double q1 = 356.179*0.0174532925;
////    double q2 = -103.567*0.0174532925;
////    double q3 = 288.065*0.0174532925;
////    double q4 = 13.836*0.0174532925;
////    double q5 = 20.974*0.0174532925;


//    double q0 = -0.626169;
//    double q1 =  5.44373;
//    double q2 = -5.03083;
//    double q3 =  6.07022;
//    double q4 =  5.21331;
//    double q5 =  4.49803;;


      double q0  = 50.772;
      double q1 = 233.182;
      double q2 = 54.425;
      double q3 = -222.267;
      double q4 = -287.880;
      double q5 = -340.567;

      rw::math::Q q_new(6,q0,q1,q2,q3,q4,q5);
      path.setQ(q_new);
      cout << path.getQ() << endl;
      path.sphere(x,y,z);
      //path.invKin(x,y,z);
////    path.setQ(path.invKin(x,y,z));
////    path.localInvkin();
//    //setQ{-0.626169,5.44373,-5.03083,6.07022,5.21331,4.49803}

//    int count  = 0;
//    bool no_Singularity_Free_Start_config = true;
//    std::ofstream outfile;
//    outfile.open("singularityFree.txt", std::ios_base::app);
//    while(no_Singularity_Free_Start_config)
//    {
//        if(count == 100)
//        {
//            no_Singularity_Free_Start_config = false;
//        }

//        //cout << "lol" << endl;
//        pair<rw::math::Q,rw::math::Q> states = path.init();
//        path.setQ(states.first);

//        if(path.singularity())
//        {
//            cout << "count: "<<count << endl;

//           //cout << "Not singularity: " << states.first << endl;
//           //cout << "setQ{"<< states.first[0]<< "," << states.first[1]<< ","<< states.first[2]<< ","<< states.first[3]<< ","<< states.first[4]<< "," << states.first[5] <<"}"<< endl;
//           std::string text = "setQ{"  + to_string(states.first[0])  + ", " + to_string(states.first[1]) + ", " + to_string(states.first[2]) + ", " + to_string(states.first[3]) + ", " + to_string(states.first[4]) + ", " + to_string(states.first[5]) + "}";
//           outfile << text << endl;
//           //no_Singularity_Free_Start_config = false;
//           count++;
//        }

//        if(count == 100)
//        {
//            no_Singularity_Free_Start_config = false;
//        }

//        path.setQ(states.second);
//        if(path.singularity())
//        {
//            cout << "count: "<<count << endl;

//           //cout << "Not singularity: " << states.second << endl;
//           //cout << "setQ{"<< states.second[0]<< "," << states.second[1]<< ","<< states.second[2]<< ","<< states.second[3]<< ","<< states.second[4]<< "," << states.second[5] <<"}"<< endl;
//           std::string text = "setQ{"  + to_string(states.second[0])  + ", " + to_string(states.second[1]) + ", " + to_string(states.second[2]) + ", " + to_string(states.second[3]) + ", " + to_string(states.second[4]) + ", " + to_string(states.second[5]) + "}";
//           outfile << text << endl;
//           //no_Singularity_Free_Start_config = false;
//           count++;
//        }

//        if(count == 100)
//        {
//            no_Singularity_Free_Start_config = false;
//        }

//    }


    cout << "done" << endl;
    return 0;
}

