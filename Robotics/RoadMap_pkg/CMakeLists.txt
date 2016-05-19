cmake_minimum_required(VERSION 2.8.3)
project(RoadMap_pkg)

########################################################################
#### Local Variables
########################################################################
set(node_name "${PROJECT_NAME}_node")
set(SHOULD_BUILD_RoadMap 1)
########################################################################
#### Make use of c++11
########################################################################
# See: http://answers.ros.org/question/173947/export-gcc-flags-though-catkin-cfg_extras/
# Should automatically use c++11 due to using caros_control
# Using hardcoded path-strings instead of a variable substitution for the use-c++11.cmake path-name, as catkin_lint doesn't properly do variable substitution (at least in this particular situation)
include("cmake/use-c++11.cmake")

########################################################################
#### Catkin Packages
########################################################################
find_package(catkin REQUIRED COMPONENTS
  std_msgs
  roscpp
  
  #Robotic
  caros_common
  caros_common_msgs
  caros_common_robwork
  caros_control
  caros_control_msgs
  geometry_msgs
  message_generation
  rosconsole
  roslint
  
  # Vision
  rospy
  genmsg
  cv_bridge
  image_transport
)

########################################################################
#### Roslint
########################################################################
set(ROSLINT_CPP_OPTS "--filter=-legal/copyright,-runtime/references")
roslint_cpp()

########################################################################
#### RobWork
########################################################################
set(RW_ROOT "$ENV{RW_ROOT}")
find_package(RobWork REQUIRED PATHS "${RW_ROOT}")

########################################################################
#### RobWorkHardware
########################################################################
set(RWHW_ROOT "$ENV{RWHW_ROOT}")
find_package(RobWorkHardware COMPONENTS universalrobots PATHS "${RWHW_ROOT}")
if (NOT ROBWORKHARDWARE_FOUND)
  message(WARNING "Requires the universalrobots component of RobWorkHardware!")
  set(SHOULD_BUILD_RoadMap 0)
endif()

########################################################################
#### Build process
########################################################################
if (SHOULD_BUILD_RoadMap)
  ################################################
  ## Declare ROS messages, services and actions ##
  ################################################
  add_service_files(
    FILES
    getConfiguration.srv
    setConfiguration.srv
    setTransformation.srv
    )

  ###################################
  ## catkin specific configuration ##
  ###################################
  catkin_package(
    INCLUDE_DIRS include
    DEPENDS RobWork RobWorkHardware
    CFG_EXTRAS "use-c++11.cmake"
    )

  ########################################################################
  #### Build
  ########################################################################
  include_directories(
    include
    ${ROBWORK_INCLUDE_DIR}
    ${ROBWORKHARDWARE_INCLUDE_DIRS}
    ${catkin_INCLUDE_DIRS}
    )

  add_executable(${node_name}
    main.cpp
    roadmap.cpp
    roadmap.hpp
    )

  target_link_libraries(${node_name}
    ${ROBWORK_LIBRARIES}
    ${ROBWORKHARDWARE_LIBRARIES}
    ${catkin_LIBRARIES}
    )

endif()
