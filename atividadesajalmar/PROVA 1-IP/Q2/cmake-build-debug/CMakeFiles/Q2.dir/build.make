# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\joao\Desktop\PROVA 1-IP\Q2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Q2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Q2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Q2.dir/flags.make

CMakeFiles/Q2.dir/Q2.c.obj: CMakeFiles/Q2.dir/flags.make
CMakeFiles/Q2.dir/Q2.c.obj: ../Q2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Q2.dir/Q2.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Q2.dir\Q2.c.obj -c "C:\Users\joao\Desktop\PROVA 1-IP\Q2\Q2.c"

CMakeFiles/Q2.dir/Q2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Q2.dir/Q2.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\joao\Desktop\PROVA 1-IP\Q2\Q2.c" > CMakeFiles\Q2.dir\Q2.c.i

CMakeFiles/Q2.dir/Q2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Q2.dir/Q2.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\joao\Desktop\PROVA 1-IP\Q2\Q2.c" -o CMakeFiles\Q2.dir\Q2.c.s

# Object files for target Q2
Q2_OBJECTS = \
"CMakeFiles/Q2.dir/Q2.c.obj"

# External object files for target Q2
Q2_EXTERNAL_OBJECTS =

Q2.exe: CMakeFiles/Q2.dir/Q2.c.obj
Q2.exe: CMakeFiles/Q2.dir/build.make
Q2.exe: CMakeFiles/Q2.dir/linklibs.rsp
Q2.exe: CMakeFiles/Q2.dir/objects1.rsp
Q2.exe: CMakeFiles/Q2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Q2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Q2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Q2.dir/build: Q2.exe

.PHONY : CMakeFiles/Q2.dir/build

CMakeFiles/Q2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Q2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Q2.dir/clean

CMakeFiles/Q2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\joao\Desktop\PROVA 1-IP\Q2" "C:\Users\joao\Desktop\PROVA 1-IP\Q2" "C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug" "C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug" "C:\Users\joao\Desktop\PROVA 1-IP\Q2\cmake-build-debug\CMakeFiles\Q2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Q2.dir/depend

