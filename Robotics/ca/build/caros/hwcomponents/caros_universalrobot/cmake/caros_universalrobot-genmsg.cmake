# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "caros_universalrobot: 2 messages, 6 services")

set(MSG_I_FLAGS "-Icaros_universalrobot:/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg;-Icaros_common_msgs:/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg;-Icaros_control_msgs:/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(caros_universalrobot_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv" "geometry_msgs/Transform:geometry_msgs/Wrench:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv" "caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv" ""
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg" "std_msgs/Header:caros_common_msgs/Q"
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv" ""
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv" "geometry_msgs/Vector3:geometry_msgs/Wrench"
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv" "geometry_msgs/Transform:geometry_msgs/Quaternion:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg" NAME_WE)
add_custom_target(_caros_universalrobot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_universalrobot" "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg" "std_msgs/Header:caros_common_msgs/Q"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_msg_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)

### Generating Services
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_cpp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
)

### Generating Module File
_generate_module_cpp(caros_universalrobot
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(caros_universalrobot_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(caros_universalrobot_generate_messages caros_universalrobot_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_cpp _caros_universalrobot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_universalrobot_gencpp)
add_dependencies(caros_universalrobot_gencpp caros_universalrobot_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_universalrobot_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_msg_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)

### Generating Services
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_lisp(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
)

### Generating Module File
_generate_module_lisp(caros_universalrobot
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(caros_universalrobot_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(caros_universalrobot_generate_messages caros_universalrobot_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_lisp _caros_universalrobot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_universalrobot_genlisp)
add_dependencies(caros_universalrobot_genlisp caros_universalrobot_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_universalrobot_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_msg_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)

### Generating Services
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/ca/src/caros/core/caros_common_msgs/msg/Q.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)
_generate_srv_py(caros_universalrobot
  "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Transform.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
)

### Generating Module File
_generate_module_py(caros_universalrobot
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(caros_universalrobot_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(caros_universalrobot_generate_messages caros_universalrobot_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStart.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoQ.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeStop.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/GripperState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceEmpty.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceForceModeUpdate.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/srv/UrServiceServoT.srv" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/ca/src/caros/hwcomponents/caros_universalrobot/msg/RobotState.msg" NAME_WE)
add_dependencies(caros_universalrobot_generate_messages_py _caros_universalrobot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_universalrobot_genpy)
add_dependencies(caros_universalrobot_genpy caros_universalrobot_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_universalrobot_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_universalrobot
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_universalrobot_generate_messages_cpp caros_common_msgs_generate_messages_cpp)
add_dependencies(caros_universalrobot_generate_messages_cpp caros_control_msgs_generate_messages_cpp)
add_dependencies(caros_universalrobot_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(caros_universalrobot_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_universalrobot
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_universalrobot_generate_messages_lisp caros_common_msgs_generate_messages_lisp)
add_dependencies(caros_universalrobot_generate_messages_lisp caros_control_msgs_generate_messages_lisp)
add_dependencies(caros_universalrobot_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(caros_universalrobot_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_universalrobot
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(caros_universalrobot_generate_messages_py caros_common_msgs_generate_messages_py)
add_dependencies(caros_universalrobot_generate_messages_py caros_control_msgs_generate_messages_py)
add_dependencies(caros_universalrobot_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(caros_universalrobot_generate_messages_py std_msgs_generate_messages_py)
