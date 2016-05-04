# Test CMake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)
# The name of the project
PROJECT(robot_simulation)
MESSAGE(${PROJECT_NAME} ":")

# Used to resolve absolute path names
SET(ROOT ${CMAKE_CURRENT_SOURCE_DIR})

#Kiddi CMAKE_PREFIX_PATH
#set(CMAKE_PREFIX_PATH /home/keerthikan/trunk/RobWork)


# Set the RobWork root (edit in .bashrc if necessary)
SET(RW_ROOT $ENV{RW_ROOT})

# Verbose mode prints more info when doing make
set(CMAKE_VERBOSE_MAKEFILE false)

# Set build type to release
SET(CMAKE_BUILD_TYPE Release)
MESSAGE("-- Build type: " ${CMAKE_BUILD_TYPE})

# Use RobWork
SET(RobWork_DIR ${RW_ROOT}/cmake)
FIND_PACKAGE(RobWork REQUIRED)
INCLUDE_DIRECTORIES( ${ROBWORK_INCLUDE_DIRS} )
LINK_DIRECTORIES( ${ROBWORK_LIBRARY_DIRS} )


#Use OpenCV
#find_package( OpenCV REQUIRED )

# Add the source files to build
SET(SrcFiles main.cpp pathplanning.cpp pathplanning.hpp)

# The shared library to build:

ADD_EXECUTABLE(main ${SrcFiles})
TARGET_LINK_LIBRARIES(main ${ROBWORK_LIBRARIES} ${OpenCV_LIBS})
#target_compile_features(${PROJECT_NAME} PRIVATE cxx_range_for)
add_definitions(-std=c++11)
MESSAGE(${PROJECT_NAME} " done!")
