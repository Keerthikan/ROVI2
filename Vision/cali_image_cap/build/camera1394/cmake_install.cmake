# Install script for directory: /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/camera1394

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394/srv" TYPE FILE FILES
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/camera1394/srv/GetCameraRegisters.srv"
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/camera1394/srv/SetCameraRegisters.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394/cmake" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/catkin_generated/installspace/camera1394-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/include/camera1394")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/share/common-lisp/ros/camera1394")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/python2.7/dist-packages/camera1394")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/python2.7/dist-packages/camera1394")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/camera1394" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/include/camera1394/Camera1394Config.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/camera1394" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/python2.7/dist-packages/camera1394/__init__.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/python2.7/dist-packages/camera1394/cfg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/camera1394" TYPE DIRECTORY FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/python2.7/dist-packages/camera1394/cfg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/catkin_generated/installspace/camera1394.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394/cmake" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/catkin_generated/installspace/camera1394-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394/cmake" TYPE FILE FILES
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/catkin_generated/installspace/camera1394Config.cmake"
    "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/catkin_generated/installspace/camera1394Config-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/camera1394/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/camera1394" TYPE FILE FILES "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/camera1394/camera1394_nodelet.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/camera1394/src/nodes/cmake_install.cmake")

endif()

