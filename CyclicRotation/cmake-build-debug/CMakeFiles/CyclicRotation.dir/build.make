# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /opt/clion-2018.1.6/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.1.6/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ctsnz0060/Codility/CyclicRotation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CyclicRotation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CyclicRotation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CyclicRotation.dir/flags.make

CMakeFiles/CyclicRotation.dir/main.cpp.o: CMakeFiles/CyclicRotation.dir/flags.make
CMakeFiles/CyclicRotation.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CyclicRotation.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CyclicRotation.dir/main.cpp.o -c /home/ctsnz0060/Codility/CyclicRotation/main.cpp

CMakeFiles/CyclicRotation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CyclicRotation.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ctsnz0060/Codility/CyclicRotation/main.cpp > CMakeFiles/CyclicRotation.dir/main.cpp.i

CMakeFiles/CyclicRotation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CyclicRotation.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ctsnz0060/Codility/CyclicRotation/main.cpp -o CMakeFiles/CyclicRotation.dir/main.cpp.s

CMakeFiles/CyclicRotation.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CyclicRotation.dir/main.cpp.o.requires

CMakeFiles/CyclicRotation.dir/main.cpp.o.provides: CMakeFiles/CyclicRotation.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CyclicRotation.dir/build.make CMakeFiles/CyclicRotation.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CyclicRotation.dir/main.cpp.o.provides

CMakeFiles/CyclicRotation.dir/main.cpp.o.provides.build: CMakeFiles/CyclicRotation.dir/main.cpp.o


# Object files for target CyclicRotation
CyclicRotation_OBJECTS = \
"CMakeFiles/CyclicRotation.dir/main.cpp.o"

# External object files for target CyclicRotation
CyclicRotation_EXTERNAL_OBJECTS =

CyclicRotation: CMakeFiles/CyclicRotation.dir/main.cpp.o
CyclicRotation: CMakeFiles/CyclicRotation.dir/build.make
CyclicRotation: CMakeFiles/CyclicRotation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CyclicRotation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CyclicRotation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CyclicRotation.dir/build: CyclicRotation

.PHONY : CMakeFiles/CyclicRotation.dir/build

CMakeFiles/CyclicRotation.dir/requires: CMakeFiles/CyclicRotation.dir/main.cpp.o.requires

.PHONY : CMakeFiles/CyclicRotation.dir/requires

CMakeFiles/CyclicRotation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CyclicRotation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CyclicRotation.dir/clean

CMakeFiles/CyclicRotation.dir/depend:
	cd /home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ctsnz0060/Codility/CyclicRotation /home/ctsnz0060/Codility/CyclicRotation /home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug /home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug /home/ctsnz0060/Codility/CyclicRotation/cmake-build-debug/CMakeFiles/CyclicRotation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CyclicRotation.dir/depend

