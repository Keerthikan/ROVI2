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
CMAKE_SOURCE_DIR = /home/keerthikan/ca/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/keerthikan/ca/build

# Utility rule file for clean_test_results_caros_common.

# Include the progress variables for this target.
include caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/progress.make

caros/core/caros_common/CMakeFiles/clean_test_results_caros_common:
	cd /home/keerthikan/ca/build/caros/core/caros_common && /usr/bin/python /opt/ros/indigo/share/catkin/cmake/test/remove_test_results.py /home/keerthikan/ca/build/test_results/caros_common

clean_test_results_caros_common: caros/core/caros_common/CMakeFiles/clean_test_results_caros_common
clean_test_results_caros_common: caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/build.make
.PHONY : clean_test_results_caros_common

# Rule to build all files generated by this target.
caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/build: clean_test_results_caros_common
.PHONY : caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/build

caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/clean:
	cd /home/keerthikan/ca/build/caros/core/caros_common && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_caros_common.dir/cmake_clean.cmake
.PHONY : caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/clean

caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/depend:
	cd /home/keerthikan/ca/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/keerthikan/ca/src /home/keerthikan/ca/src/caros/core/caros_common /home/keerthikan/ca/build /home/keerthikan/ca/build/caros/core/caros_common /home/keerthikan/ca/build/caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : caros/core/caros_common/CMakeFiles/clean_test_results_caros_common.dir/depend
