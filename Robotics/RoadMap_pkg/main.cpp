#include <ros/ros.h>
#include <caros_control_msgs/RobotState.h>

#include <caros/common.h>
#include <caros/common_robwork.h>

#include <rw/math/MetricFactory.hpp>

#include <ros/assert.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3Stamped.h>
#include <std_msgs/String.h>

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

#include "roadmap.hpp"



class robot_tomove_node
{
protected:

    ros::NodeHandle nh_;
    ros::NodeHandle nhPrivate_;

    std_msgs::String Robot_RoadMapSub;
    std_msgs::String Robot_RoadMapSub_temp;
    std_msgs::String Robot_RoadMapPub;
    ros::Subscriber sub;
    ros::Publisher pub;

    caros_control_msgs::RobotStateConstPtr robot_test;
    caros_control_msgs::RobotStateConstPtr robot_test_temp;

public:
    std::vector<Q> N;
    std::vector<vector<int>> E;
    std::vector<rw::math::Transform3D<>> Tr;
    std::vector<rw::math::Transform3D<>> transform;
    std::vector<rw::math::Transform3D<>> fundtransform;
    std::vector<rw::math::Q> transformThere;
    std::vector<rw::math::Q> transformToSend;


    robot_tomove_node(ros::NodeHandle& nh):nh_(nh)
    {
        //kiddi topic
        sub = nh.subscribe("/caros_universalrobot/caros_serial_device_service_interface/robot_state", 1, &robot_tomove_node::robotCb, this);
        //pub = nh.advertise<caros_control_msgs::RobotState>("Robot_RoadMap_Pub", 1000);
        pub = nh.advertise<std_msgs::String>("Robot_RoadMap_Pub", 1000);
    }

    void robotCb(const caros_control_msgs::RobotStateConstPtr& robottomove)
    //void robotCb(const std_msgs::String& robottomove)
    {
        if ( &robottomove == NULL)
        return;

        ROS_ERROR("callback");
        //Robot_RoadMapSub = robottomove;
        // Test
        robot_test = robottomove;
        //

    }

    bool findTransform(rw::math::Transform3D<> transform)
    {
        for(int j = 0; j < Tr.size(); j++)
        {
            if(transform == Tr[j])
            {
                return true;
            }
        }
        return false;
    }

    rw::math::Q getQ(rw::math::Transform3D<> transform)
    {
        Q temp_q;
        for(int j = 0; j < Tr.size(); j++)
        {
            if(transform == Tr[j])
            {
                temp_q = N[j];
            }
        }
        return temp_q;
    }

    void findpath()
    {
        int randNum = rand()%(transformThere.size()-1) + 1;
        int startq = 0, endq = 0;
        //cout << "randNum: " << randNum << endl;

        for(int i = 0; i < N.size(); i++)
        {
            if(transformThere[0] == N[i])
            {
                startq = i;
                //cout << "start q: " << i << endl;
            }
            if(transformThere[randNum] == N[i])
            {
                endq = i;
                //cout << "end q: " << i << endl;
            }
        }
        if(E[startq][endq] == 1)
        {
            transformToSend.push_back(transformThere[randNum]);
            return;
        }
        else
        {
            //cout << "path finding DFS" << endl;
            stack<int> s;
            stack<int> path, temppath;
            int temp, count;
            vector<int> visitedNodes(N.size());
            //cout << "path init" << endl;

            s.push(startq);
            while(!s.empty())
            {
                temp = s.top();
                s.pop();
                path.push(temp);
                count = 0;
                if(temp == endq)
                {
                    //cout << path.size() << endl;
                    while(!path.empty())
                    {   //cout << "reverse path" << endl;
                        temppath.push(path.top());
                        path.pop();
                        transformToSend.push_back(N[temppath.top()]);
                        temppath.pop();
                    }
                    return;
                }
                visitedNodes[temp] = 1;

                for(int j = 0; j < N.size(); j++)
                {
                    if(E[temp][j] == 1 && visitedNodes[j] == 0)
                    {
                        s.push(j);
                        count = 1;
                    }
                    while(count == 0)
                    {
                        count = 1;
                        for(int k = 0; k < N.size(); k++)
                        {
                            if(E[path.top()][k] == 1 && visitedNodes[k] == 0)
                            {
                                count = 2;
                            }
                        }
                        if(count != 2)
                        {
                            for(int k = 0; k < N.size(); k++)
                            {
                                if(E[path.top()][k] == 1 && visitedNodes[k] == 1 && E[path.top()][k] != temp)
                                {
                                    path.pop();
                                    count = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        return;
    }

    void robot_tomove()
    {
        /* Test
        */
        if ( robot_test == NULL || robot_test == robot_test_temp)
        return;
        ROS_ERROR("robot_tomove");
        robot_test_temp = robot_test;
         /* Test
         */

        transform.clear();
        fundtransform.clear();
        transformThere.clear();
        transformToSend.clear();
//        if (Robot_RoadMapSub.data.c_str() == Robot_RoadMapSub_temp.data.c_str())
//        return;
//        ROS_ERROR("robot_tomove");
//        Robot_RoadMapSub_temp = Robot_RoadMapSub;

//        string receivestring;
//        receivestring = Robot_RoadMapSub.data.c_str();

        /*
         * Udpak string her.
        */
        /* Test */
        transform.push_back(Tr[5]);
        transform.push_back(Tr[12]);
        /* Test */

        //cout << "findTransform1: " << transform.size() << endl;
        bool isThere = findTransform(transform[0]);
        //cout << "2: " << isThere << endl;
        isThere = false; //test

        if(isThere = true)
        {
            fundtransform.push_back(transform[0]);
            for(int i = 1; i < transform.size(); i++)
            {
                isThere = findTransform(transform[i]);
                if(isThere = true)
                {
                    fundtransform.push_back(transform[i]);
                }
            }
            if(!fundtransform.empty())
            {
                isThere = true;
                //cout << "3: " << isThere << endl;
            }
            else
            {
                isThere = false;
                //cout << "4: " << isThere << endl;
            }
        }


        if(isThere == false)
        {
            std_msgs::String notThere_msgs;
            notThere_msgs = Robot_RoadMapPub;

            std::stringstream ss;
            ss << " ";
            notThere_msgs.data = ss.str();

            ROS_INFO("%s", notThere_msgs.data.c_str());

            cout << "Send notThere" << isThere << endl;

            /*
             * Add to graph
             * Need More Testing!
            */
            transform.push_back(Tr[5]);
            transform.push_back(Tr[12]);
            N.push_back(getQ(transform[0]));
            int sizetemp = E.size();
            for(int i = 0; i<sizetemp; i++)
            {
                E[i].push_back(0);
                //E[sizetemp][i].push_back(0);
            }
            E[sizetemp][5] = 1;
            E[5][sizetemp] = 1;

            Tr.push_back(Tr[5]);

            for(int i = 1; i < transform.size(); i++)
            {
                N.push_back(getQ(transform[0]));
                int sizetemp = E.size();
                for(int j = 0; j<sizetemp; j++)
                {
                    E[j].push_back(0);
                    //E[sizetemp][j].push_back(0);
                }
                E[sizetemp][E.size()] = 1;
                E[E.size()][sizetemp] = 1;

                Tr.push_back(transform[i]);
            }
//            int Nsize = N.size();
//            rw::math::Transform3D<> startT;
//            startT = transform[0];
//            test.getTransform(node.N);
            cout << E.size() << ", " << N.size() << ", " << N[N.size()] << ", " << Tr.size() << ", " << Tr[Tr.size()] << endl;

            pub.publish(notThere_msgs);

        }
        if(isThere == true)
        {
            std_msgs::String there_msgs;
            there_msgs = Robot_RoadMapPub;/*not there*/

            //cout << "5" << endl;
            for(int i = 0; i < fundtransform.size(); i++)
            {
                transformThere.push_back(getQ(fundtransform[i]));
                //cout << "6: " << fundtransform[i]<< endl;
            }
            //cout << "7: " << transformThere.size() << endl;
            findpath();

            string mystring = "";
            int temp;

            for(int i = 0; i < transformToSend.size(); i++)
            {
                std::stringstream ss;
                temp = i+1;
                if(temp == transformToSend.size())
                {
                    ss << transformToSend[i];
                    mystring.append(ss.str());
                }
                else
                {
                    ss << transformToSend[i] << ";";
                    mystring.append(ss.str());
                }
            }

            there_msgs.data = mystring;

            ROS_INFO("%s", there_msgs.data.c_str());

            pub.publish(there_msgs);
        }
    }


    void spin()
    {
        ros::Rate rate(30);
        while (ros::ok())
        {
              ROS_ERROR("spin");
              ros::spinOnce();
              robot_tomove();
              rate.sleep();
        }
    }

};


int main(int argc, char** argv)
{
    ros::init(argc, argv, "Robot_RoadMap");
    ros::NodeHandle nh;
    robot_tomove_node node(nh);

    int nodecount = 1000;
    int neighborcount = 30;
    string wcFile = "/home/student/catkin_pkg_ws/src/RoadMap_pkg/URScene/WS2_Scene.wc.xml";
    string deviceName = "UR1";

    int countnodes = 0;
    Q q_r;

    roadMap test(wcFile,deviceName,nodecount,neighborcount);
    cout << "road map initialized" << endl;

    while(countnodes < nodecount)
    {
        q_r = test.getRandomq();
        //cout << "random node" << endl;

        if(!test.collision(q_r))
        {
             //cout << "collision" << endl;
             node.N.push_back(q_r);
             //cout << " set in N" << endl;
             countnodes++;
        }
    }
    cout << "got random nodes" << endl;

    node.E = test.constructroadMap(node.N);
    cout << "E constructed" << endl;
    node.Tr = test.getTransform(node.N);
    cout << "Tr constructed" << endl;
    cout << "ready to spin" << endl;

//    for(int i = 0; i < node.N.size(); i++)
//    {
//        for(int j = 0; j < node.N.size(); j++)
//        {
//            cout << node.E[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for(int i = 0; i < node.N.size(); i++)
//    {
//        //cout << node.N[i] << endl;
//        cout << node.Tr[i] << endl;
//    }
//ofstream data;
//        data.open ("RoadMapAdj15.txt");
//        for(int i = 0; i < nodecount; i++)
//        {
//            for(int j = 0; j < nodecount; j++)
//            {
//                int matrixtemp = node.E[i][j];
//                data << matrixtemp << " ";
//            }
//            data << endl;
//        }
//        data.close();

    node.spin();
}
