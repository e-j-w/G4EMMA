# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake3

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jwilliams/Documents/Code/G4EMMA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jwilliams/Documents/Code/G4EMMA

# Utility rule file for EMMA.

# Include the progress variables for this target.
include CMakeFiles/EMMA.dir/progress.make

CMakeFiles/EMMA: EMMAapp

EMMA: CMakeFiles/EMMA
EMMA: CMakeFiles/EMMA.dir/build.make
.PHONY : EMMA

# Rule to build all files generated by this target.
CMakeFiles/EMMA.dir/build: EMMA
.PHONY : CMakeFiles/EMMA.dir/build

CMakeFiles/EMMA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EMMA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EMMA.dir/clean

CMakeFiles/EMMA.dir/depend:
	cd /home/jwilliams/Documents/Code/G4EMMA && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jwilliams/Documents/Code/G4EMMA /home/jwilliams/Documents/Code/G4EMMA /home/jwilliams/Documents/Code/G4EMMA /home/jwilliams/Documents/Code/G4EMMA /home/jwilliams/Documents/Code/G4EMMA/CMakeFiles/EMMA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EMMA.dir/depend

