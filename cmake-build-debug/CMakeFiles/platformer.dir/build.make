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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mrlukasbos/development/platformer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mrlukasbos/development/platformer/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/platformer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/platformer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/platformer.dir/flags.make

CMakeFiles/platformer.dir/src/main.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mrlukasbos/development/platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/platformer.dir/src/main.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/main.cpp.o -c /Users/mrlukasbos/development/platformer/src/main.cpp

CMakeFiles/platformer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mrlukasbos/development/platformer/src/main.cpp > CMakeFiles/platformer.dir/src/main.cpp.i

CMakeFiles/platformer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mrlukasbos/development/platformer/src/main.cpp -o CMakeFiles/platformer.dir/src/main.cpp.s

CMakeFiles/platformer.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/platformer.dir/src/main.cpp.o.requires

CMakeFiles/platformer.dir/src/main.cpp.o.provides: CMakeFiles/platformer.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/platformer.dir/build.make CMakeFiles/platformer.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/platformer.dir/src/main.cpp.o.provides

CMakeFiles/platformer.dir/src/main.cpp.o.provides.build: CMakeFiles/platformer.dir/src/main.cpp.o


CMakeFiles/platformer.dir/src/Vector2.cpp.o: CMakeFiles/platformer.dir/flags.make
CMakeFiles/platformer.dir/src/Vector2.cpp.o: ../src/Vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mrlukasbos/development/platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/platformer.dir/src/Vector2.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platformer.dir/src/Vector2.cpp.o -c /Users/mrlukasbos/development/platformer/src/Vector2.cpp

CMakeFiles/platformer.dir/src/Vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformer.dir/src/Vector2.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mrlukasbos/development/platformer/src/Vector2.cpp > CMakeFiles/platformer.dir/src/Vector2.cpp.i

CMakeFiles/platformer.dir/src/Vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformer.dir/src/Vector2.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mrlukasbos/development/platformer/src/Vector2.cpp -o CMakeFiles/platformer.dir/src/Vector2.cpp.s

CMakeFiles/platformer.dir/src/Vector2.cpp.o.requires:

.PHONY : CMakeFiles/platformer.dir/src/Vector2.cpp.o.requires

CMakeFiles/platformer.dir/src/Vector2.cpp.o.provides: CMakeFiles/platformer.dir/src/Vector2.cpp.o.requires
	$(MAKE) -f CMakeFiles/platformer.dir/build.make CMakeFiles/platformer.dir/src/Vector2.cpp.o.provides.build
.PHONY : CMakeFiles/platformer.dir/src/Vector2.cpp.o.provides

CMakeFiles/platformer.dir/src/Vector2.cpp.o.provides.build: CMakeFiles/platformer.dir/src/Vector2.cpp.o


# Object files for target platformer
platformer_OBJECTS = \
"CMakeFiles/platformer.dir/src/main.cpp.o" \
"CMakeFiles/platformer.dir/src/Vector2.cpp.o"

# External object files for target platformer
platformer_EXTERNAL_OBJECTS =

platformer: CMakeFiles/platformer.dir/src/main.cpp.o
platformer: CMakeFiles/platformer.dir/src/Vector2.cpp.o
platformer: CMakeFiles/platformer.dir/build.make
platformer: CMakeFiles/platformer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mrlukasbos/development/platformer/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable platformer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/platformer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/platformer.dir/build: platformer

.PHONY : CMakeFiles/platformer.dir/build

CMakeFiles/platformer.dir/requires: CMakeFiles/platformer.dir/src/main.cpp.o.requires
CMakeFiles/platformer.dir/requires: CMakeFiles/platformer.dir/src/Vector2.cpp.o.requires

.PHONY : CMakeFiles/platformer.dir/requires

CMakeFiles/platformer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/platformer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/platformer.dir/clean

CMakeFiles/platformer.dir/depend:
	cd /Users/mrlukasbos/development/platformer/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mrlukasbos/development/platformer /Users/mrlukasbos/development/platformer /Users/mrlukasbos/development/platformer/cmake-build-debug /Users/mrlukasbos/development/platformer/cmake-build-debug /Users/mrlukasbos/development/platformer/cmake-build-debug/CMakeFiles/platformer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/platformer.dir/depend

