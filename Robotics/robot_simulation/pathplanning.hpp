#ifndef PATHPLANNING_HPP
#define PATHPLANNING_HPP

#include <fstream>

#include <rw/rw.hpp>

#include <rw/loaders/WorkCellLoader.hpp>

#include <rw/models/WorkCell.hpp>

#include <rw/common.hpp>

#include <rwlibs/proximitystrategies/ProximityStrategyFactory.hpp>
#include </home/keerthikan/RobWork/src/sandbox/learnbip/RandomSampler.hpp>

#include <boost/random.hpp>

#include <rw/pathplanning/PlannerConstraint.hpp>
#include <rw/pathplanning/QToQPlanner.hpp>
#include <rw/pathplanning/QSampler.hpp>

#include <rw/invkin/JacobianIKSolver.hpp>
#include <rw/invkin/AmbiguityResolver.hpp>
#include <rw/invkin/ParallelIKSolver.hpp>

#include <rwlibs/pathplanners/rrt/RRTQToQPlanner.hpp>

#include <rw/math/MetricFactory.hpp>
#include <rw/math/Transform3D.hpp>
#include <rw/math/Vector3D.hpp>
#include <rw/math/RPY.hpp>
#include <rw/math/LinearAlgebra.hpp>
#include <rw/math/Rotation3DVector.hpp>
#include <rw/math/Jacobian.hpp>
#include <rw/math/Q.hpp>
#include <rw/math/EAA.hpp>


using namespace rw;
using namespace rw::math;
using namespace rw::models;
using namespace rw::kinematics;
using namespace rw::proximity;
using namespace rw::common;
using namespace rwlibs::proximitystrategies;
using namespace std;

class pathPlanning // Standard way of defining the class
{
private:
    string wcFile;
    string deviceName;
    WorkCell::Ptr workcell;
    Device::Ptr device;
    CollisionDetector::Ptr detector;
    State state;
    rw::kinematics::Frame* toolFrame;


public:

    pathPlanning(string wcFile , string deviceName);
    bool collision(Q q);
    std::pair<Q,Q> colision_free_Q();
    rw::math::Q invKin(double dx, double dy, double dz);
    rw::math::Q invKin();
    std::vector<rw::math::Transform3D<>> sphere(double dx, double dy, double dz);
    void setQ(rw::math::Q q_new);
    rw::math::Transform3D<> transform(double x_current, double obj_y, double obj_z, double sphere_x, double sphere_y , double sphere_z);
    std::vector<rw::math::Transform3D<> > invKin_LargeDisplacement(rw::math::Transform3D<>);
    rw::math::Q getQ();
    bool singularity();
    bool within_bound(rw::math::Q input);
    void invKin_LargeDisplacement();


};


#endif // PATHPLANNING_HPP
