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
CMAKE_SOURCE_DIR = /home/runner/Skillbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/Skillbox/build

# Include any dependencies generated for this target.
include source/sort_functions/CMakeFiles/sort_functions_libraries.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/sort_functions/CMakeFiles/sort_functions_libraries.dir/compiler_depend.make

# Include the progress variables for this target.
include source/sort_functions/CMakeFiles/sort_functions_libraries.dir/progress.make

# Include the compile flags for this target's objects.
include source/sort_functions/CMakeFiles/sort_functions_libraries.dir/flags.make

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/flags.make
source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o: /home/runner/Skillbox/source/sort_functions/insert_sort.cpp
source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Skillbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o -MF CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o.d -o CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o -c /home/runner/Skillbox/source/sort_functions/insert_sort.cpp

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.i"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/runner/Skillbox/source/sort_functions/insert_sort.cpp > CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.i

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.s"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/runner/Skillbox/source/sort_functions/insert_sort.cpp -o CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.s

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/flags.make
source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o: /home/runner/Skillbox/source/sort_functions/merge_sort.cpp
source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/Skillbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o -MF CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o.d -o CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o -c /home/runner/Skillbox/source/sort_functions/merge_sort.cpp

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.i"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/runner/Skillbox/source/sort_functions/merge_sort.cpp > CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.i

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.s"
	cd /home/runner/Skillbox/build/source/sort_functions && /nix/store/dq0xwmsk1g0i2ayg6pb7y87na2knzylh-gcc-wrapper-11.3.0/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/runner/Skillbox/source/sort_functions/merge_sort.cpp -o CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.s

# Object files for target sort_functions_libraries
sort_functions_libraries_OBJECTS = \
"CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o" \
"CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o"

# External object files for target sort_functions_libraries
sort_functions_libraries_EXTERNAL_OBJECTS =

source/sort_functions/libsort_functions_libraries.a: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/insert_sort.cpp.o
source/sort_functions/libsort_functions_libraries.a: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/merge_sort.cpp.o
source/sort_functions/libsort_functions_libraries.a: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/build.make
source/sort_functions/libsort_functions_libraries.a: source/sort_functions/CMakeFiles/sort_functions_libraries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/runner/Skillbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libsort_functions_libraries.a"
	cd /home/runner/Skillbox/build/source/sort_functions && $(CMAKE_COMMAND) -P CMakeFiles/sort_functions_libraries.dir/cmake_clean_target.cmake
	cd /home/runner/Skillbox/build/source/sort_functions && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort_functions_libraries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/sort_functions/CMakeFiles/sort_functions_libraries.dir/build: source/sort_functions/libsort_functions_libraries.a
.PHONY : source/sort_functions/CMakeFiles/sort_functions_libraries.dir/build

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/clean:
	cd /home/runner/Skillbox/build/source/sort_functions && $(CMAKE_COMMAND) -P CMakeFiles/sort_functions_libraries.dir/cmake_clean.cmake
.PHONY : source/sort_functions/CMakeFiles/sort_functions_libraries.dir/clean

source/sort_functions/CMakeFiles/sort_functions_libraries.dir/depend:
	cd /home/runner/Skillbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/Skillbox /home/runner/Skillbox/source/sort_functions /home/runner/Skillbox/build /home/runner/Skillbox/build/source/sort_functions /home/runner/Skillbox/build/source/sort_functions/CMakeFiles/sort_functions_libraries.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/sort_functions/CMakeFiles/sort_functions_libraries.dir/depend

