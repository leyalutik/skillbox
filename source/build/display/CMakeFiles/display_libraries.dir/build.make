# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /nix/store/rxb9zl1mdx9f2n3z0nyv9zhngj3f2pw0-cmake-3.24.3/bin/cmake

# The command to remove a file.
RM = /nix/store/rxb9zl1mdx9f2n3z0nyv9zhngj3f2pw0-cmake-3.24.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/runner/Skillbox/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/Skillbox/source/build

# Include any dependencies generated for this target.
include display/CMakeFiles/display_libraries.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include display/CMakeFiles/display_libraries.dir/compiler_depend.make

# Include the progress variables for this target.
include display/CMakeFiles/display_libraries.dir/progress.make

# Include the compile flags for this target's objects.
include display/CMakeFiles/display_libraries.dir/flags.make

display/CMakeFiles/display_libraries.dir/containers.cpp.o: display/CMakeFiles/display_libraries.dir/flags.make
display/CMakeFiles/display_libraries.dir/containers.cpp.o: /home/runner/Skillbox/source/display/containers.cpp
display/CMakeFiles/display_libraries.dir/containers.cpp.o: display/CMakeFiles/display_libraries.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Skillbox/source/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object display/CMakeFiles/display_libraries.dir/containers.cpp.o"
	cd /home/runner/Skillbox/source/build/display && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT display/CMakeFiles/display_libraries.dir/containers.cpp.o -MF CMakeFiles/display_libraries.dir/containers.cpp.o.d -o CMakeFiles/display_libraries.dir/containers.cpp.o -c /home/runner/Skillbox/source/display/containers.cpp

display/CMakeFiles/display_libraries.dir/containers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/display_libraries.dir/containers.cpp.i"
	cd /home/runner/Skillbox/source/build/display && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/runner/Skillbox/source/display/containers.cpp > CMakeFiles/display_libraries.dir/containers.cpp.i

display/CMakeFiles/display_libraries.dir/containers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/display_libraries.dir/containers.cpp.s"
	cd /home/runner/Skillbox/source/build/display && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/runner/Skillbox/source/display/containers.cpp -o CMakeFiles/display_libraries.dir/containers.cpp.s

# Object files for target display_libraries
display_libraries_OBJECTS = \
"CMakeFiles/display_libraries.dir/containers.cpp.o"

# External object files for target display_libraries
display_libraries_EXTERNAL_OBJECTS =

display/libdisplay_libraries.a: display/CMakeFiles/display_libraries.dir/containers.cpp.o
display/libdisplay_libraries.a: display/CMakeFiles/display_libraries.dir/build.make
display/libdisplay_libraries.a: display/CMakeFiles/display_libraries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/runner/Skillbox/source/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdisplay_libraries.a"
	cd /home/runner/Skillbox/source/build/display && $(CMAKE_COMMAND) -P CMakeFiles/display_libraries.dir/cmake_clean_target.cmake
	cd /home/runner/Skillbox/source/build/display && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/display_libraries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
display/CMakeFiles/display_libraries.dir/build: display/libdisplay_libraries.a
.PHONY : display/CMakeFiles/display_libraries.dir/build

display/CMakeFiles/display_libraries.dir/clean:
	cd /home/runner/Skillbox/source/build/display && $(CMAKE_COMMAND) -P CMakeFiles/display_libraries.dir/cmake_clean.cmake
.PHONY : display/CMakeFiles/display_libraries.dir/clean

display/CMakeFiles/display_libraries.dir/depend:
	cd /home/runner/Skillbox/source/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/Skillbox/source /home/runner/Skillbox/source/display /home/runner/Skillbox/source/build /home/runner/Skillbox/source/build/display /home/runner/Skillbox/source/build/display/CMakeFiles/display_libraries.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : display/CMakeFiles/display_libraries.dir/depend

