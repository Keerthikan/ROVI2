# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build

# Include any dependencies generated for this target.
include subscriber/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include subscriber/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include subscriber/CMakeFiles/main.dir/flags.make

subscriber/CMakeFiles/main.dir/main.cpp.o: subscriber/CMakeFiles/main.dir/flags.make
subscriber/CMakeFiles/main.dir/main.cpp.o: /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/subscriber/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object subscriber/CMakeFiles/main.dir/main.cpp.o"
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/subscriber/main.cpp

subscriber/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/subscriber/main.cpp > CMakeFiles/main.dir/main.cpp.i

subscriber/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/subscriber/main.cpp -o CMakeFiles/main.dir/main.cpp.s

subscriber/CMakeFiles/main.dir/main.cpp.o.requires:
.PHONY : subscriber/CMakeFiles/main.dir/main.cpp.o.requires

subscriber/CMakeFiles/main.dir/main.cpp.o.provides: subscriber/CMakeFiles/main.dir/main.cpp.o.requires
	$(MAKE) -f subscriber/CMakeFiles/main.dir/build.make subscriber/CMakeFiles/main.dir/main.cpp.o.provides.build
.PHONY : subscriber/CMakeFiles/main.dir/main.cpp.o.provides

subscriber/CMakeFiles/main.dir/main.cpp.o.provides.build: subscriber/CMakeFiles/main.dir/main.cpp.o

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: subscriber/CMakeFiles/main.dir/main.cpp.o
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: subscriber/CMakeFiles/main.dir/build.make
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libcv_bridge.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libimage_transport.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libmessage_filters.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libclass_loader.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/libPocoFoundation.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libdl.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libroscpp.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/librosconsole.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/liblog4cxx.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libroslib.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/librostime.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /opt/ros/indigo/lib/libcpp_common.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main: subscriber/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main"
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
subscriber/CMakeFiles/main.dir/build: /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib/subscriber/main
.PHONY : subscriber/CMakeFiles/main.dir/build

subscriber/CMakeFiles/main.dir/requires: subscriber/CMakeFiles/main.dir/main.cpp.o.requires
.PHONY : subscriber/CMakeFiles/main.dir/requires

subscriber/CMakeFiles/main.dir/clean:
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : subscriber/CMakeFiles/main.dir/clean

subscriber/CMakeFiles/main.dir/depend:
	cd /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/subscriber /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/build/subscriber/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : subscriber/CMakeFiles/main.dir/depend
