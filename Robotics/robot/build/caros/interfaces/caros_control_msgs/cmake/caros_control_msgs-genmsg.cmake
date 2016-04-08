# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "caros_control_msgs: 2 messages, 15 services")

set(MSG_I_FLAGS "-Icaros_control_msgs:/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg;-Icaros_common_msgs:/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(caros_control_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv" "geometry_msgs/Vector3:geometry_msgs/Wrench"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv" "geometry_msgs/Transform:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg" "std_msgs/Header:caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv" "geometry_msgs/Vector3:geometry_msgs/Twist"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv" "geometry_msgs/Transform:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg" "std_msgs/Header:caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv" ""
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv" ""
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv" "geometry_msgs/Transform:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv" NAME_WE)
add_custom_target(_caros_control_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_control_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv" "geometry_msgs/Transform:geometry_msgs/Wrench:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_msg_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)

### Generating Services
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Twist.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_cpp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
)

### Generating Module File
_generate_module_cpp(caros_control_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(caros_control_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(caros_control_msgs_generate_messages caros_control_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_cpp _caros_control_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_control_msgs_gencpp)
add_dependencies(caros_control_msgs_gencpp caros_control_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_control_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_msg_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)

### Generating Services
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Twist.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_lisp(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
)

### Generating Module File
_generate_module_lisp(caros_control_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(caros_control_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(caros_control_msgs_generate_messages caros_control_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_lisp _caros_control_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_control_msgs_genlisp)
add_dependencies(caros_control_msgs_genlisp caros_control_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_control_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_msg_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)

### Generating Services
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Twist.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)
_generate_srv_py(caros_control_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
)

### Generating Module File
_generate_module_py(caros_control_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(caros_control_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(caros_control_msgs_generate_messages caros_control_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv" NAME_WE)
add_dependencies(caros_control_msgs_generate_messages_py _caros_control_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_control_msgs_genpy)
add_dependencies(caros_control_msgs_genpy caros_control_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_control_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_control_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_control_msgs_generate_messages_cpp caros_common_msgs_generate_messages_cpp)
add_dependencies(caros_control_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(caros_control_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_control_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_control_msgs_generate_messages_lisp caros_common_msgs_generate_messages_lisp)
add_dependencies(caros_control_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(caros_control_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_control_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(caros_control_msgs_generate_messages_py caros_common_msgs_generate_messages_py)
add_dependencies(caros_control_msgs_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(caros_control_msgs_generate_messages_py std_msgs_generate_messages_py)
