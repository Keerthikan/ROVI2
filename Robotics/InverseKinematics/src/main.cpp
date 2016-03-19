#include <rw/rw.hpp>
#include <rw/math/Q.hpp>
#include <rw/loaders/WorkCellLoader.hpp>
#include <rw/models/WorkCell.hpp>
#include <rw/common.hpp>
#include <rwlibs/proximitystrategies/ProximityStrategyFactory.hpp>
#include <rw/math.hpp>
#include </home/keerthikan/trunk/RobWork/src/sandbox/learnbip/RandomSampler.hpp>
#include <boost/random.hpp>
#include <rw/invkin/InvKinSolver.hpp>
#include <rw/math/Transform3D.hpp>
#include <rw/math/Vector3D.hpp>

using namespace rw;
using namespace rw::models;
using namespace rw::kinematics;
using namespace rw::proximity;
using namespace rw::common;
using namespace rwlibs::proximitystrategies;
using namespace std;




int main()
{
    cout << "Hello World!" << endl;

    string wcFile = "/home/keerthikan/Dropbox/Eksamen/ROVI2/Robotics/Lektion01/src/KukaKr16/Scene.wc.xml";
    string deviceName = "KukaKr16";
    WorkCell::Ptr workcell = rw::loaders::WorkCellLoader::Factory::load(wcFile);
    Device::Ptr device = workcell->findDevice(deviceName);

    if (device == NULL)
    {
        std::cerr << "Device: " << deviceName << " not found!" << std::endl;
        exit(0);
    }

    State state = workcell->getDefaultState();

    //Inverse kinematics
    //Input: Current state, and transformation matrix containing new position.
    rw::math::Vector3D<double> toolPos(1,2,3);
    rw::math::Transform3D<double> newPosition(toolPos,device.get()->baseTend(state).R());
    rw::invkin::JacobianIKSolver ik(device,workcell->getDefaultState());
    //std::vector<math::Q> newConfig;
    std::vector<math::Q> newConfig = ik.solve(newPosition,workcell->getDefaultState());
    cout << newConfig.size() << endl;
    return 0;
}

