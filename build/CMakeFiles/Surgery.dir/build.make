# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/leyalutik/Desktop/git/skillbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leyalutik/Desktop/git/skillbox/build

# Include any dependencies generated for this target.
include CMakeFiles/Surgery.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Surgery.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Surgery.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Surgery.dir/flags.make

CMakeFiles/Surgery.dir/main.cpp.o: CMakeFiles/Surgery.dir/flags.make
CMakeFiles/Surgery.dir/main.cpp.o: ../main.cpp
CMakeFiles/Surgery.dir/main.cpp.o: CMakeFiles/Surgery.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leyalutik/Desktop/git/skillbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Surgery.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Surgery.dir/main.cpp.o -MF CMakeFiles/Surgery.dir/main.cpp.o.d -o CMakeFiles/Surgery.dir/main.cpp.o -c /home/leyalutik/Desktop/git/skillbox/main.cpp

CMakeFiles/Surgery.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Surgery.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leyalutik/Desktop/git/skillbox/main.cpp > CMakeFiles/Surgery.dir/main.cpp.i

CMakeFiles/Surgery.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Surgery.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leyalutik/Desktop/git/skillbox/main.cpp -o CMakeFiles/Surgery.dir/main.cpp.s

# Object files for target Surgery
Surgery_OBJECTS = \
"CMakeFiles/Surgery.dir/main.cpp.o"

# External object files for target Surgery
Surgery_EXTERNAL_OBJECTS =

Surgery: CMakeFiles/Surgery.dir/main.cpp.o
Surgery: CMakeFiles/Surgery.dir/build.make
Surgery: SOURCE/libsurgery_lib.a
Surgery: CMakeFiles/Surgery.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leyalutik/Desktop/git/skillbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Surgery"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Surgery.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Surgery.dir/build: Surgery
.PHONY : CMakeFiles/Surgery.dir/build

CMakeFiles/Surgery.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Surgery.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Surgery.dir/clean

CMakeFiles/Surgery.dir/depend:
	cd /home/leyalutik/Desktop/git/skillbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leyalutik/Desktop/git/skillbox /home/leyalutik/Desktop/git/skillbox /home/leyalutik/Desktop/git/skillbox/build /home/leyalutik/Desktop/git/skillbox/build /home/leyalutik/Desktop/git/skillbox/build/CMakeFiles/Surgery.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Surgery.dir/depend

