# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "caros_common_robwork_msgs: 2 messages, 1 services")

set(MSG_I_FLAGS "-Icaros_common_robwork_msgs:/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(caros_common_robwork_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg" NAME_WE)
add_custom_target(_caros_common_robwork_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_common_robwork_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg" "caros_common_robwork_msgs/RwStateData"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv" NAME_WE)
add_custom_target(_caros_common_robwork_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_common_robwork_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv" "caros_common_robwork_msgs/RwState:caros_common_robwork_msgs/RwStateData"
)

get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg" NAME_WE)
add_custom_target(_caros_common_robwork_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "caros_common_robwork_msgs" "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs
)
_generate_msg_cpp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Services
_generate_srv_cpp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Module File
_generate_module_cpp(caros_common_robwork_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(caros_common_robwork_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(caros_common_robwork_msgs_generate_messages caros_common_robwork_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_cpp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_cpp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_cpp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_common_robwork_msgs_gencpp)
add_dependencies(caros_common_robwork_msgs_gencpp caros_common_robwork_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_common_robwork_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs
)
_generate_msg_lisp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Services
_generate_srv_lisp(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Module File
_generate_module_lisp(caros_common_robwork_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(caros_common_robwork_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(caros_common_robwork_msgs_generate_messages caros_common_robwork_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_lisp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_lisp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_lisp _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_common_robwork_msgs_genlisp)
add_dependencies(caros_common_robwork_msgs_genlisp caros_common_robwork_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_common_robwork_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs
)
_generate_msg_py(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Services
_generate_srv_py(caros_common_robwork_msgs
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv"
  "${MSG_I_FLAGS}"
  "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs
)

### Generating Module File
_generate_module_py(caros_common_robwork_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(caros_common_robwork_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(caros_common_robwork_msgs_generate_messages caros_common_robwork_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_py _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_py _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg" NAME_WE)
add_dependencies(caros_common_robwork_msgs_generate_messages_py _caros_common_robwork_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(caros_common_robwork_msgs_genpy)
add_dependencies(caros_common_robwork_msgs_genpy caros_common_robwork_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS caros_common_robwork_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/caros_common_robwork_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_common_robwork_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
add_dependencies(caros_common_robwork_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/caros_common_robwork_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(caros_common_robwork_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
add_dependencies(caros_common_robwork_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/caros_common_robwork_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(caros_common_robwork_msgs_generate_messages_py geometry_msgs_generate_messages_py)
add_dependencies(caros_common_robwork_msgs_generate_messages_py std_msgs_generate_messages_py)
