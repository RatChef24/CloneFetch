# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /home/ratchef/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/222.3739.54/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ratchef/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/222.3739.54/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ratchef/Documenti/GitHub/CloneFetch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/main.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/main.c.o: ../main.c
CMakeFiles/untitled.dir/main.c.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled.dir/main.c.o -MF CMakeFiles/untitled.dir/main.c.o.d -o CMakeFiles/untitled.dir/main.c.o -c /home/ratchef/Documenti/GitHub/CloneFetch/main.c

CMakeFiles/untitled.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ratchef/Documenti/GitHub/CloneFetch/main.c > CMakeFiles/untitled.dir/main.c.i

CMakeFiles/untitled.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ratchef/Documenti/GitHub/CloneFetch/main.c -o CMakeFiles/untitled.dir/main.c.s

CMakeFiles/untitled.dir/fetch.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/fetch.c.o: ../fetch.c
CMakeFiles/untitled.dir/fetch.c.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/untitled.dir/fetch.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled.dir/fetch.c.o -MF CMakeFiles/untitled.dir/fetch.c.o.d -o CMakeFiles/untitled.dir/fetch.c.o -c /home/ratchef/Documenti/GitHub/CloneFetch/fetch.c

CMakeFiles/untitled.dir/fetch.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/fetch.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ratchef/Documenti/GitHub/CloneFetch/fetch.c > CMakeFiles/untitled.dir/fetch.c.i

CMakeFiles/untitled.dir/fetch.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/fetch.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ratchef/Documenti/GitHub/CloneFetch/fetch.c -o CMakeFiles/untitled.dir/fetch.c.s

CMakeFiles/untitled.dir/logos.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/logos.c.o: ../logos.c
CMakeFiles/untitled.dir/logos.c.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/untitled.dir/logos.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled.dir/logos.c.o -MF CMakeFiles/untitled.dir/logos.c.o.d -o CMakeFiles/untitled.dir/logos.c.o -c /home/ratchef/Documenti/GitHub/CloneFetch/logos.c

CMakeFiles/untitled.dir/logos.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/logos.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ratchef/Documenti/GitHub/CloneFetch/logos.c > CMakeFiles/untitled.dir/logos.c.i

CMakeFiles/untitled.dir/logos.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/logos.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ratchef/Documenti/GitHub/CloneFetch/logos.c -o CMakeFiles/untitled.dir/logos.c.s

CMakeFiles/untitled.dir/util.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/util.c.o: ../util.c
CMakeFiles/untitled.dir/util.c.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/untitled.dir/util.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled.dir/util.c.o -MF CMakeFiles/untitled.dir/util.c.o.d -o CMakeFiles/untitled.dir/util.c.o -c /home/ratchef/Documenti/GitHub/CloneFetch/util.c

CMakeFiles/untitled.dir/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/util.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ratchef/Documenti/GitHub/CloneFetch/util.c > CMakeFiles/untitled.dir/util.c.i

CMakeFiles/untitled.dir/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/util.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ratchef/Documenti/GitHub/CloneFetch/util.c -o CMakeFiles/untitled.dir/util.c.s

CMakeFiles/untitled.dir/display.c.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/display.c.o: ../display.c
CMakeFiles/untitled.dir/display.c.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/untitled.dir/display.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/untitled.dir/display.c.o -MF CMakeFiles/untitled.dir/display.c.o.d -o CMakeFiles/untitled.dir/display.c.o -c /home/ratchef/Documenti/GitHub/CloneFetch/display.c

CMakeFiles/untitled.dir/display.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled.dir/display.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ratchef/Documenti/GitHub/CloneFetch/display.c > CMakeFiles/untitled.dir/display.c.i

CMakeFiles/untitled.dir/display.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled.dir/display.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ratchef/Documenti/GitHub/CloneFetch/display.c -o CMakeFiles/untitled.dir/display.c.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/main.c.o" \
"CMakeFiles/untitled.dir/fetch.c.o" \
"CMakeFiles/untitled.dir/logos.c.o" \
"CMakeFiles/untitled.dir/util.c.o" \
"CMakeFiles/untitled.dir/display.c.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/main.c.o
untitled: CMakeFiles/untitled.dir/fetch.c.o
untitled: CMakeFiles/untitled.dir/logos.c.o
untitled: CMakeFiles/untitled.dir/util.c.o
untitled: CMakeFiles/untitled.dir/display.c.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled
.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ratchef/Documenti/GitHub/CloneFetch /home/ratchef/Documenti/GitHub/CloneFetch /home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug /home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug /home/ratchef/Documenti/GitHub/CloneFetch/cmake-build-debug/CMakeFiles/untitled.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled.dir/depend
