# Install script for directory: /home/keerthikan/ca/src/caros/interfaces/caros_control_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/keerthikan/ca/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs/srv" TYPE FILE FILES
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/GripperGripQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/GripperMoveQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/GripperSetForceQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/GripperSetVelocityQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/GripperStopMovement.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStart.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlStop.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceForceControlUpdate.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveLin.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtp.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMovePtpT.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveServoT.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelQ.srv"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/srv/SerialDeviceMoveVelT.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs/msg" TYPE FILE FILES
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg/GripperState.msg"
    "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/msg/RobotState.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs/cmake" TYPE FILE FILES "/home/keerthikan/ca/build/caros/interfaces/caros_control_msgs/catkin_generated/installspace/caros_control_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/keerthikan/ca/devel/include/caros_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/keerthikan/ca/devel/share/common-lisp/ros/caros_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/keerthikan/ca/devel/lib/python2.7/dist-packages/caros_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/keerthikan/ca/devel/lib/python2.7/dist-packages/caros_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/keerthikan/ca/build/caros/interfaces/caros_control_msgs/catkin_generated/installspace/caros_control_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs/cmake" TYPE FILE FILES "/home/keerthikan/ca/build/caros/interfaces/caros_control_msgs/catkin_generated/installspace/caros_control_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs/cmake" TYPE FILE FILES
    "/home/keerthikan/ca/build/caros/interfaces/caros_control_msgs/catkin_generated/installspace/caros_control_msgsConfig.cmake"
    "/home/keerthikan/ca/build/caros/interfaces/caros_control_msgs/catkin_generated/installspace/caros_control_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_control_msgs" TYPE FILE FILES "/home/keerthikan/ca/src/caros/interfaces/caros_control_msgs/package.xml")
endif()

