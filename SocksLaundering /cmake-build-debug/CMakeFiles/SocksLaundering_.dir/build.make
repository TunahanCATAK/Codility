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
CMAKE_SOURCE_DIR = "/home/ctsnz0060/Codility/SocksLaundering "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SocksLaundering_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SocksLaundering_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SocksLaundering_.dir/flags.make

CMakeFiles/SocksLaundering_.dir/main.cpp.o: CMakeFiles/SocksLaundering_.dir/flags.make
CMakeFiles/SocksLaundering_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SocksLaundering_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SocksLaundering_.dir/main.cpp.o -c "/home/ctsnz0060/Codility/SocksLaundering /main.cpp"

CMakeFiles/SocksLaundering_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SocksLaundering_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ctsnz0060/Codility/SocksLaundering /main.cpp" > CMakeFiles/SocksLaundering_.dir/main.cpp.i

CMakeFiles/SocksLaundering_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SocksLaundering_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ctsnz0060/Codility/SocksLaundering /main.cpp" -o CMakeFiles/SocksLaundering_.dir/main.cpp.s

CMakeFiles/SocksLaundering_.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SocksLaundering_.dir/main.cpp.o.requires

CMakeFiles/SocksLaundering_.dir/main.cpp.o.provides: CMakeFiles/SocksLaundering_.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SocksLaundering_.dir/build.make CMakeFiles/SocksLaundering_.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SocksLaundering_.dir/main.cpp.o.provides

CMakeFiles/SocksLaundering_.dir/main.cpp.o.provides.build: CMakeFiles/SocksLaundering_.dir/main.cpp.o


# Object files for target SocksLaundering_
SocksLaundering__OBJECTS = \
"CMakeFiles/SocksLaundering_.dir/main.cpp.o"

# External object files for target SocksLaundering_
SocksLaundering__EXTERNAL_OBJECTS =

SocksLaundering_: CMakeFiles/SocksLaundering_.dir/main.cpp.o
SocksLaundering_: CMakeFiles/SocksLaundering_.dir/build.make
SocksLaundering_: CMakeFiles/SocksLaundering_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SocksLaundering_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SocksLaundering_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SocksLaundering_.dir/build: SocksLaundering_

.PHONY : CMakeFiles/SocksLaundering_.dir/build

CMakeFiles/SocksLaundering_.dir/requires: CMakeFiles/SocksLaundering_.dir/main.cpp.o.requires

.PHONY : CMakeFiles/SocksLaundering_.dir/requires

CMakeFiles/SocksLaundering_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SocksLaundering_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SocksLaundering_.dir/clean

CMakeFiles/SocksLaundering_.dir/depend:
	cd "/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ctsnz0060/Codility/SocksLaundering " "/home/ctsnz0060/Codility/SocksLaundering " "/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug" "/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug" "/home/ctsnz0060/Codility/SocksLaundering /cmake-build-debug/CMakeFiles/SocksLaundering_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SocksLaundering_.dir/depend
