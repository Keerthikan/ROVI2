#include <rw/rw.hpp>
#include <rw/math/Q.hpp>
#include <rw/loaders/WorkCellLoader.hpp>
#include <rw/models/WorkCell.hpp>
#include <rw/common.hpp>
#include <rwlibs/proximitystrategies/ProximityStrategyFactory.hpp>
#include <rw/math.hpp>
#include </home/student/RobWork/RobWork/src/sandbox/learnbip/RandomSampler.hpp>
#include <boost/random.hpp>
//#include "pathplanning.hpp"

using namespace rw;
using namespace rw::math;
using namespace rw::models;
using namespace rw::kinematics;
using namespace rw::proximity;
using namespace rw::common;
using namespace rwlibs::proximitystrategies;
using namespace std;

class roadMap
{
private:
    string wcFile;
    string deviceName;
    WorkCell::Ptr workcell;
    Device::Ptr device;
    CollisionDetector::Ptr detector;
    State state;
    int nodeCount;
    int neighborCount;
    std::vector<Q> N;
    //std::vector<Q> N_n;
    std::vector<vector<int>> E;
    std::vector<int> visitedNodes;
    std::vector<pair<std::vector<Q>,std::vector<vector<int>>>> R;
    //std::vector<Q> tempVqn;
    //std::vector<pair<double,Q>> vectorQD;
    //std::vector<pair<double,Q>> tempQD;
    //pathPlanning* pathPlan;

public:
    roadMap(string wcFile , string deviceName, int nodeCount, int neighborCount);
    std::vector<vector<int>> constructroadMap(std::vector<Q> Ntemp);
    Q getRandomq();
    bool collision(Q q);
    std::vector<Q> getNeighbor(Q q);
    bool connected(int pos1, int pos2);
    bool collisionfreepath(Q q1, Q q2);
    int findPos(Q q);
    void intAdj();
    void add_edge(int pos1, int pos2);
    void detectremovecycleBFS();
    void detectremovecycleDFS();
    std::pair<bool,int> Straight_Forward_Testing(Q q1, Q q2, double ep );
    std::vector<Transform3D<>> getTransform(std::vector<Q> q_vector);
};
