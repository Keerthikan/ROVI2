# Install script for directory: /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs/msg" TYPE FILE FILES
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwState.msg"
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/msg/RwStateData.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs/srv" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/srv/GetRwState.srv")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs/cmake" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/core/caros_common_robwork_msgs/catkin_generated/installspace/caros_common_robwork_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/devel/include/caros_common_robwork_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/devel/share/common-lisp/ros/caros_common_robwork_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/devel/lib/python2.7/dist-packages/caros_common_robwork_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/devel/lib/python2.7/dist-packages/caros_common_robwork_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/core/caros_common_robwork_msgs/catkin_generated/installspace/caros_common_robwork_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs/cmake" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/core/caros_common_robwork_msgs/catkin_generated/installspace/caros_common_robwork_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs/cmake" TYPE FILE FILES
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/core/caros_common_robwork_msgs/catkin_generated/installspace/caros_common_robwork_msgsConfig.cmake"
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/core/caros_common_robwork_msgs/catkin_generated/installspace/caros_common_robwork_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_common_robwork_msgs" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/core/caros_common_robwork_msgs/package.xml")
endif()
