# Install script for directory: /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/hwcomponents/caros_robotiq

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/hwcomponents/caros_robotiq/catkin_generated/installspace/caros_robotiq.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_robotiq/cmake" TYPE FILE FILES
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/hwcomponents/caros_robotiq/catkin_generated/installspace/caros_robotiqConfig.cmake"
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/build/caros/hwcomponents/caros_robotiq/catkin_generated/installspace/caros_robotiqConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/caros_robotiq" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Robotics/robot/src/caros/hwcomponents/caros_robotiq/package.xml")
endif()

