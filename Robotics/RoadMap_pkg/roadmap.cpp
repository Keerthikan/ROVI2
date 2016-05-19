#include "roadmap.hpp"
#include <rw/pathplanning/QSampler.hpp>
#include <rw/math/MetricFactory.hpp>
#include <stdlib.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <chrono>
#include <ctime>


roadMap::roadMap(string wcFile, string deviceName, int mynodeCount, int myneighborCount)
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

    nodeCount = mynodeCount;
    neighborCount = myneighborCount;
    cout << "init containers" << endl;
    std::vector<int> tempvisited(nodeCount);
    visitedNodes = tempvisited;

    std::vector<Q> N_init(nodeCount);
    N = N_init;

    std::vector<vector<int>> E_init(nodeCount, vector<int>(nodeCount));
    E = E_init;

    std::vector<pair<std::vector<Q>,std::vector<vector<int>>>> R_init(1);
    R_init[0].first = N_init;
    R_init[0].second = E;
    R = R_init;

    cout << "loaded" << endl;
}

std::vector<vector<int>> roadMap::constructroadMap(std::vector<Q> Ntemp)
{
   cout << "construct road map" << endl;
   N = Ntemp;
   std::vector<Q> N_n(nodeCount);
   std::chrono::time_point<std::chrono::system_clock> startTime1, endTime1;

   startTime1 = std::chrono::system_clock::now();

   intAdj();

   endTime1 = std::chrono::system_clock::now();
   std::chrono::duration<double> elapsed_seconds = endTime1-startTime1;
   cout << "Time intAdj: "<< elapsed_seconds.count() << endl;

   startTime1 = std::chrono::system_clock::now();

   int pos1 = 0;
   int pos2 = 0;
   cout << "Construct E" << endl;

   for(int i = 0; i < nodeCount; i++)
   {
       //cout << "run number: " << tempnodecount << endl;

       pos1 = findPos(N[i]);
       //cout << "pos 1 found " << pos1 << endl;
       N_n = getNeighbor(N[i]);
       //cout << "getNeighbores " << endl;
       for(int j = 0; j < neighborCount; j++)
       {
           pos2 = findPos(N_n[j]);
           //cout << "pos 2 found " << pos2 << endl;
           if(!connected(pos1, pos2) && collisionfreepath(N[i], N_n[j])) // SOMETHING IS WRONG HERE AT SECOND(3) RUN!!!!
           {
               //cout << "got into add edge at run number: " << tempnodecount << endl;
               add_edge(pos1, pos2);
           }
           else
           {
               //cout << "no edge to add at run number: " << tempnodecount << endl;
           }
       }
       N_n.clear();
       //cout << "run number: " << tempnodecount  << " end" << endl;
       //tempnodecount++;
   }
   endTime1 = std::chrono::system_clock::now();
   elapsed_seconds = endTime1-startTime1;
   cout << "Time Construct E: "<< elapsed_seconds.count() << endl;

   detectremovecycleBFS();
//   detectremovecycleDFS();

   return E;
}

Q roadMap::getRandomq()
{
    //Robwork  generate random collision free Start and end point.
    rw::math::Math::ranQ(this->device->getBounds());
    rw::pathplanning::QSampler::Ptr q1;

    //Test if start or end configuration is collision free
    rw::math::Math seed();

    Q tempQ = q1.get()->makeUniform(device).get()->sample();
    //cout << tempQ << endl;
    return tempQ;
}

bool roadMap::collision(Q q)
{
    device->setQ(q, state);
    CollisionDetector::QueryResult data;
    return detector->inCollision(state,&data);
}

std::vector<Transform3D<>> roadMap::getTransform(std::vector<Q> q_vector)
{
       std::vector<Transform3D<>> mytransform(q_vector.size());
       Transform3D<> temptransform;
       Frame* endframe = device->getEnd();
       if(endframe != NULL)
       {
           for(int i = 0; i < nodeCount; i++)
           {
               device->setQ(q_vector[i], state);
               temptransform = device->baseTframe(endframe, state);
               mytransform[i] = temptransform;
           }
       }
       return mytransform;
}

std::vector<Q> roadMap::getNeighbor(Q q)
{
    //cout << "can i get into get neig" << endl;
    Q tempQdist;
    pair<double,Q> temp;
    std::vector<pair<double,Q>> vectorQD_init(nodeCount - 1);
    std::vector<Q> tempVqn(neighborCount);
    int count = 0;

    for(int i = 0; i < nodeCount; i++)
    {
        //cout << "can i get into forloop get neig" << endl;
        if(q != N[i])
        {
            //cout << i << " i er " << endl;
            tempQdist = q - N[i];
            //cout << "is it distace in get neig" << endl;
            vectorQD_init[count].first = tempQdist.norm1();
            //cout << "is it first in get neig" << endl;
            vectorQD_init[count].second = N[i];
            //cout << vectorQD[count].second << endl;
            count++;
        }
    }

    for(int i = 0; i < neighborCount; i++)
    {
        //cout << "is it second forloop in get neig" << endl;
        temp = *std::min_element(begin(vectorQD_init),end(vectorQD_init));
        //cout << "minimum element is " << temp.first << "; " << temp.second << endl;
        vectorQD_init.erase(std::min_element(begin(vectorQD_init),end(vectorQD_init)));
        //cout << "is it erase in get neig" << endl;
        tempVqn[i] = temp.second;
        //cout << "neigbor number " << i + 1 << ": " << tempVqn[i] << std::endl;
    }
    return tempVqn;
}

bool roadMap::connected(int pos1, int pos2)
{
    //cout << "connected" << endl;
    if(E[pos1][pos2] == 1 && E[pos2][pos1] == 1 )
    {
        //cout << "Is connected" << endl;
        return true;        
    }
    if(E[pos1][pos2] == 0 && E[pos2][pos1] == 0 )
    {
        //cout << "Is not connected" << endl;
        return false;        
    }
    else
    {
        std::cout << "ERROR MATRIX NOT COMPLETE" << pos1 << "and" << pos2 << "not connected in all!!!";
        if(pos1 == 2 || pos2 == 2)
        {
            std::cout << "Now your just stupid" << pos1 << "or" << pos2 << "are 2 or worse BOTH!!";
        }
        return false;
    }
}

bool roadMap::collisionfreepath(Q q1, Q q2)
{// tjek if they have a collision free path
    //cout << "collisionfreepath" << q1 << ", " << q2 << endl;

    double eps = 0.1;

    pair<bool,int> result;
    result = Straight_Forward_Testing(q1, q2, eps);

    return result.first;
}

int roadMap::findPos(Q q)
{
    for(int i = 0; i < nodeCount; i++)
    {
        if(q == N[i])
        {
            return i;
        }
    }
    //cout << "no pos found for " << q << endl;
    return 0;
}

void roadMap::intAdj()
{
    cout << "init Adj matrix" << endl;
    //cout << "set visited nodes false" << endl;
    for (int i = 0; i < nodeCount; i++)
    {
        visitedNodes[i] = 0; // set all to false
        for(int j = 0; j < nodeCount; j++)
        {
            if(i == 0 && j == 0)
            {
                //cout << E[i][j] << " at " << i << ", " << j << endl;
            }
            E[i][j] = 0;
        }        
    }
    //cout << "set visited nodes false done" << endl;
}
void roadMap::add_edge(int pos1, int pos2)
{
    if( pos1 > nodeCount || pos2 > nodeCount || pos1 < 0 || pos2 < 0)
    {
        cout<<"Invalid edge!\n";
    }
    else
    {
        E[pos1][pos2] = 1;
        E[pos2][pos1] = 1;
        //cout << "edge added" << endl;
    }
}

void roadMap::detectremovecycleDFS()
{
    cout << "cycle detection DFS" << endl;
    stack<int> s;
    stack<int> s_temp;
    int stack_int_temp;
    int temp;
    int visitedcount = 0;
    int graphcount = 0;
    bool b;

    for(int i = 0; i < nodeCount; i++)
    {
        if(visitedNodes[i] == 0)
        {
            graphcount++;
            cout << "graph number " << graphcount << endl;
            s.push(i);
            while(!s.empty())
            {
                temp = s.top();
                s.pop();
                //cout << "stack int's are: ' " << temp << endl;
                visitedNodes[temp] = 1;
                visitedcount = 0;

                for(int j = 0; j < nodeCount; j++)
                {
                    if(E[temp][j] == 1 && visitedNodes[j] == 0)
                    {
                        s_temp = s;
                        b = false;
                        //tjek om den er i stack
                        while(!s_temp.empty())
                        {
                            stack_int_temp = s_temp.top();
                            s_temp.pop();
                            //cout << "stack_int_temp: " << stack_int_temp << " and j is: " << j << endl;
                            if(j == stack_int_temp)
                            {
                                //cout << "b is true" << endl;
                                b = true;
                            }
                        }
                        if(!b)
                        {
                            //cout << "b is false" << endl;
                            s.push(j);
                        }
                    }
                    if(E[temp][j] == 1 && visitedNodes[j] == 1)
                    {
                        visitedcount++;
                        if(visitedcount >= 2)
                        {
                            E[temp][j] = 0;
                            E[j][temp] = 0;
//                            std::cout<<" "<<" "<<" "<<" "<<"_"<<"_"<<"@"<< std::endl;
//                            std::cout<<" "<<"_"<<"`"<<"\\"<<"<"<<","<<"_"<< std::endl;
//                            std::cout<<" "<<"("<<"*"<<")"<<"/"<<" "<<"("<<"*"<<")"<< std::endl;
//                            std::cout<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<< std::endl;
                        }
                    }
                }
                visitedNodes[i] = 1;
            }
        }
    }
}

void roadMap::detectremovecycleBFS()
{
    cout << "cycle detection BFS" << endl;
    queue<int> q;
    queue<int> q_temp;
    int queue_int_temp;
    int temp;
    int visitedcount = 0;
    int graphcount = 0;
    bool b;

    for(int i = 0; i < nodeCount; i++)
    {
        if(visitedNodes[i] == 0)
        {
            graphcount++;
            cout << "graph number " << graphcount << endl;
            q.push(i);
            while(!q.empty())
            {
                temp = q.front();
                q.pop();
                visitedNodes[temp] = 1;
                visitedcount = 0;

                for(int j = 0; j < nodeCount; j++)
                {
                    if(E[temp][j] == 1 && visitedNodes[j] == 0)
                    {
                        q_temp = q;
                        b = false;
                        //tjek om den er i stack
                        while(!q_temp.empty())
                        {
                            queue_int_temp = q_temp.front();
                            q_temp.pop();
                            //cout << "queue_int_temp: " << queue_int_temp << " and j is: " << j << endl;
                            if(j == queue_int_temp)
                            {
                                //cout << "b is true" << endl;
                                b = true;
                            }
                        }
                        if(!b)
                        {
                            //cout << "b is false" << endl;
                            q.push(j);
                        }

                    }
                    if(E[temp][j] == 1 && visitedNodes[j] == 1)
                    {
                        visitedcount++;
                        if(visitedcount >= 2)
                        {
                            E[temp][j] = 0;
                            E[j][temp] = 0;
//                            std::cout<<" "<<" "<<" "<<" "<<"_"<<"_"<<"@"<< std::endl;
//                            std::cout<<" "<<"_"<<"`"<<"\\"<<"<"<<","<<"_"<< std::endl;
//                            std::cout<<" "<<"("<<"*"<<")"<<"/"<<" "<<"("<<"*"<<")"<< std::endl;
//                            std::cout<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<<"~"<< std::endl;
                        }
                    }
                }
                visitedNodes[temp] = 1;
            }
        }
    }
}

std::pair<bool,int> roadMap::Straight_Forward_Testing(Q q1, Q q2, double ep )
{
    //cout << "Straight_Forward_Testing: " << endl;
    Q dq = q2-q1;
    //cout << "Straight_Forward_Testing: 1" << endl;
    double n = ceil(dq.norm2()/ep)-1;
    //cout << "Straight_Forward_Testing: 2" << endl;
    for(int i = 1; i <= (int)n ; i++)
    {
        //cout << "Straight_Forward_Testing: 3" << endl;
        Q q_i = i*ep*(dq/dq.norm2())+q1;
        //cout << q_i << endl;
        if(1==0/*collision(q_i)*/)
        {
            //cout << "Collision in between! "  << q_i<< endl;
            return make_pair(false, i);
        }
    }
    //cout << "all good Straight_Forward_Testing" << endl;
    return make_pair(true,(int)n);
}
