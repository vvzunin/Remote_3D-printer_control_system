# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/user/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/user/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/simple_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_example.dir/flags.make

CMakeFiles/simple_example.dir/tcpserver.c.o: CMakeFiles/simple_example.dir/flags.make
CMakeFiles/simple_example.dir/tcpserver.c.o: ../tcpserver.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/simple_example.dir/tcpserver.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/simple_example.dir/tcpserver.c.o   -c /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/tcpserver.c

CMakeFiles/simple_example.dir/tcpserver.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/simple_example.dir/tcpserver.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/tcpserver.c > CMakeFiles/simple_example.dir/tcpserver.c.i

CMakeFiles/simple_example.dir/tcpserver.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/simple_example.dir/tcpserver.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/tcpserver.c -o CMakeFiles/simple_example.dir/tcpserver.c.s

# Object files for target simple_example
simple_example_OBJECTS = \
"CMakeFiles/simple_example.dir/tcpserver.c.o"

# External object files for target simple_example
simple_example_EXTERNAL_OBJECTS =

simple_example.exe: CMakeFiles/simple_example.dir/tcpserver.c.o
simple_example.exe: CMakeFiles/simple_example.dir/build.make
simple_example.exe: CMakeFiles/simple_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable simple_example.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_example.dir/build: simple_example.exe

.PHONY : CMakeFiles/simple_example.dir/build

CMakeFiles/simple_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_example.dir/clean

CMakeFiles/simple_example.dir/depend:
	cd /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug /cygdrive/c/Users/user/Documents/GitHub/FQW/HPS/server/sublime/cmake-build-debug/CMakeFiles/simple_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_example.dir/depend

