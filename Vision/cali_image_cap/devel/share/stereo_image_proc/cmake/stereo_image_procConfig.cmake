# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(stereo_image_proc_CONFIG_INCLUDED)
  return()
endif()
set(stereo_image_proc_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("TRUE" STREQUAL "TRUE")
  set(stereo_image_proc_SOURCE_PREFIX /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/stereo_image_proc)
  set(stereo_image_proc_DEVEL_PREFIX /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel)
  set(stereo_image_proc_INSTALL_PREFIX "")
  set(stereo_image_proc_PREFIX ${stereo_image_proc_DEVEL_PREFIX})
else()
  set(stereo_image_proc_SOURCE_PREFIX "")
  set(stereo_image_proc_DEVEL_PREFIX "")
  set(stereo_image_proc_INSTALL_PREFIX /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/install)
  set(stereo_image_proc_PREFIX ${stereo_image_proc_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'stereo_image_proc' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(stereo_image_proc_FOUND_CATKIN_PROJECT TRUE)

if(NOT "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/include;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/stereo_image_proc/include " STREQUAL " ")
  set(stereo_image_proc_INCLUDE_DIRS "")
  set(_include_dirs "/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/include;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/stereo_image_proc/include")
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${stereo_image_proc_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'stereo_image_proc' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Vincent Rabaud <vincent.rabaud@gmail.com>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'stereo_image_proc' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/src/image_pipeline/stereo_image_proc/${idir}'.  Ask the maintainer 'Vincent Rabaud <vincent.rabaud@gmail.com>' to fix it.")
    endif()
    _list_append_unique(stereo_image_proc_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "stereo_image_proc")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND stereo_image_proc_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND stereo_image_proc_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND stereo_image_proc_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib;/home/keerthikan/Dropbox/Eksamen/ROVI2/Project/Vision/cali_image_cap/devel/lib;/opt/ros/indigo/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(stereo_image_proc_LIBRARY_DIRS ${lib_path})
      list(APPEND stereo_image_proc_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'stereo_image_proc'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND stereo_image_proc_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(stereo_image_proc_EXPORTED_TARGETS "stereo_image_proc_gencfg")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${stereo_image_proc_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "image_geometry;image_proc;sensor_msgs;stereo_msgs")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 stereo_image_proc_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${stereo_image_proc_dep}_FOUND)
      find_package(${stereo_image_proc_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${stereo_image_proc_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(stereo_image_proc_INCLUDE_DIRS ${${stereo_image_proc_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(stereo_image_proc_LIBRARIES ${stereo_image_proc_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${stereo_image_proc_dep}_LIBRARIES})
  _list_append_deduplicate(stereo_image_proc_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(stereo_image_proc_LIBRARIES ${stereo_image_proc_LIBRARIES})

  _list_append_unique(stereo_image_proc_LIBRARY_DIRS ${${stereo_image_proc_dep}_LIBRARY_DIRS})
  list(APPEND stereo_image_proc_EXPORTED_TARGETS ${${stereo_image_proc_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${stereo_image_proc_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
