# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/local/python/3.12.1/lib/python3.12/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/python/3.12.1/lib/python3.12/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/Programmentwurf_cj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/Programmentwurf_cj

# Include any dependencies generated for this target.
include CMakeFiles/Programmentwurf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Programmentwurf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Programmentwurf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Programmentwurf.dir/flags.make

CMakeFiles/Programmentwurf.dir/codegen:
.PHONY : CMakeFiles/Programmentwurf.dir/codegen

CMakeFiles/Programmentwurf.dir/main.c.o: CMakeFiles/Programmentwurf.dir/flags.make
CMakeFiles/Programmentwurf.dir/main.c.o: main.c
CMakeFiles/Programmentwurf.dir/main.c.o: CMakeFiles/Programmentwurf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspaces/Programmentwurf_cj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Programmentwurf.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Programmentwurf.dir/main.c.o -MF CMakeFiles/Programmentwurf.dir/main.c.o.d -o CMakeFiles/Programmentwurf.dir/main.c.o -c /workspaces/Programmentwurf_cj/main.c

CMakeFiles/Programmentwurf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Programmentwurf.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /workspaces/Programmentwurf_cj/main.c > CMakeFiles/Programmentwurf.dir/main.c.i

CMakeFiles/Programmentwurf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Programmentwurf.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /workspaces/Programmentwurf_cj/main.c -o CMakeFiles/Programmentwurf.dir/main.c.s

# Object files for target Programmentwurf
Programmentwurf_OBJECTS = \
"CMakeFiles/Programmentwurf.dir/main.c.o"

# External object files for target Programmentwurf
Programmentwurf_EXTERNAL_OBJECTS =

Programmentwurf: CMakeFiles/Programmentwurf.dir/main.c.o
Programmentwurf: CMakeFiles/Programmentwurf.dir/build.make
Programmentwurf: libProgram_lib.a
Programmentwurf: CMakeFiles/Programmentwurf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/workspaces/Programmentwurf_cj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Programmentwurf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Programmentwurf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Programmentwurf.dir/build: Programmentwurf
.PHONY : CMakeFiles/Programmentwurf.dir/build

CMakeFiles/Programmentwurf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Programmentwurf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Programmentwurf.dir/clean

CMakeFiles/Programmentwurf.dir/depend:
	cd /workspaces/Programmentwurf_cj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/Programmentwurf_cj /workspaces/Programmentwurf_cj /workspaces/Programmentwurf_cj /workspaces/Programmentwurf_cj /workspaces/Programmentwurf_cj/CMakeFiles/Programmentwurf.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Programmentwurf.dir/depend

