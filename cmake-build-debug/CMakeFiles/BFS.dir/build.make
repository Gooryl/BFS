# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gooryl/Documents/MyProjects/BFS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BFS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BFS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BFS.dir/flags.make

CMakeFiles/BFS.dir/Sourse/main.c.o: CMakeFiles/BFS.dir/flags.make
CMakeFiles/BFS.dir/Sourse/main.c.o: ../Sourse/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BFS.dir/Sourse/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BFS.dir/Sourse/main.c.o   -c /Users/gooryl/Documents/MyProjects/BFS/Sourse/main.c

CMakeFiles/BFS.dir/Sourse/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BFS.dir/Sourse/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gooryl/Documents/MyProjects/BFS/Sourse/main.c > CMakeFiles/BFS.dir/Sourse/main.c.i

CMakeFiles/BFS.dir/Sourse/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BFS.dir/Sourse/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gooryl/Documents/MyProjects/BFS/Sourse/main.c -o CMakeFiles/BFS.dir/Sourse/main.c.s

# Object files for target BFS
BFS_OBJECTS = \
"CMakeFiles/BFS.dir/Sourse/main.c.o"

# External object files for target BFS
BFS_EXTERNAL_OBJECTS =

BFS: CMakeFiles/BFS.dir/Sourse/main.c.o
BFS: CMakeFiles/BFS.dir/build.make
BFS: CMakeFiles/BFS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BFS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BFS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BFS.dir/build: BFS

.PHONY : CMakeFiles/BFS.dir/build

CMakeFiles/BFS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BFS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BFS.dir/clean

CMakeFiles/BFS.dir/depend:
	cd /Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gooryl/Documents/MyProjects/BFS /Users/gooryl/Documents/MyProjects/BFS /Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug /Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug /Users/gooryl/Documents/MyProjects/BFS/cmake-build-debug/CMakeFiles/BFS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BFS.dir/depend

