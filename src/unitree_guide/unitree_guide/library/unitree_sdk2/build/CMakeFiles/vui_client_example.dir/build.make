# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/parallels/Projects/unitree_sdk2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/Projects/unitree_sdk2/build

# Include any dependencies generated for this target.
include CMakeFiles/vui_client_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vui_client_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vui_client_example.dir/flags.make

CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o: CMakeFiles/vui_client_example.dir/flags.make
CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o: ../example/client/vui_client_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/Projects/unitree_sdk2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o -c /home/parallels/Projects/unitree_sdk2/example/client/vui_client_example.cpp

CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/Projects/unitree_sdk2/example/client/vui_client_example.cpp > CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.i

CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/Projects/unitree_sdk2/example/client/vui_client_example.cpp -o CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.s

# Object files for target vui_client_example
vui_client_example_OBJECTS = \
"CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o"

# External object files for target vui_client_example
vui_client_example_EXTERNAL_OBJECTS =

vui_client_example: CMakeFiles/vui_client_example.dir/example/client/vui_client_example.cpp.o
vui_client_example: CMakeFiles/vui_client_example.dir/build.make
vui_client_example: CMakeFiles/vui_client_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/Projects/unitree_sdk2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vui_client_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vui_client_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vui_client_example.dir/build: vui_client_example

.PHONY : CMakeFiles/vui_client_example.dir/build

CMakeFiles/vui_client_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vui_client_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vui_client_example.dir/clean

CMakeFiles/vui_client_example.dir/depend:
	cd /home/parallels/Projects/unitree_sdk2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/Projects/unitree_sdk2 /home/parallels/Projects/unitree_sdk2 /home/parallels/Projects/unitree_sdk2/build /home/parallels/Projects/unitree_sdk2/build /home/parallels/Projects/unitree_sdk2/build/CMakeFiles/vui_client_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vui_client_example.dir/depend

