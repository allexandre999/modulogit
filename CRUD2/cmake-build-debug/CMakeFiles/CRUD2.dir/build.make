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
CMAKE_SOURCE_DIR = C:\Users\joao\CLionProjects\CRUD2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CRUD2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CRUD2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CRUD2.dir/flags.make

CMakeFiles/CRUD2.dir/main.c.obj: CMakeFiles/CRUD2.dir/flags.make
CMakeFiles/CRUD2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CRUD2.dir/main.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CRUD2.dir\main.c.obj -c C:\Users\joao\CLionProjects\CRUD2\main.c

CMakeFiles/CRUD2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CRUD2.dir/main.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joao\CLionProjects\CRUD2\main.c > CMakeFiles\CRUD2.dir\main.c.i

CMakeFiles/CRUD2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CRUD2.dir/main.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joao\CLionProjects\CRUD2\main.c -o CMakeFiles\CRUD2.dir\main.c.s

CMakeFiles/CRUD2.dir/funcionario.c.obj: CMakeFiles/CRUD2.dir/flags.make
CMakeFiles/CRUD2.dir/funcionario.c.obj: ../funcionario.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CRUD2.dir/funcionario.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CRUD2.dir\funcionario.c.obj -c C:\Users\joao\CLionProjects\CRUD2\funcionario.c

CMakeFiles/CRUD2.dir/funcionario.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CRUD2.dir/funcionario.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joao\CLionProjects\CRUD2\funcionario.c > CMakeFiles\CRUD2.dir\funcionario.c.i

CMakeFiles/CRUD2.dir/funcionario.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CRUD2.dir/funcionario.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joao\CLionProjects\CRUD2\funcionario.c -o CMakeFiles\CRUD2.dir\funcionario.c.s

CMakeFiles/CRUD2.dir/dependente.c.obj: CMakeFiles/CRUD2.dir/flags.make
CMakeFiles/CRUD2.dir/dependente.c.obj: ../dependente.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CRUD2.dir/dependente.c.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\CRUD2.dir\dependente.c.obj -c C:\Users\joao\CLionProjects\CRUD2\dependente.c

CMakeFiles/CRUD2.dir/dependente.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CRUD2.dir/dependente.c.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joao\CLionProjects\CRUD2\dependente.c > CMakeFiles\CRUD2.dir\dependente.c.i

CMakeFiles/CRUD2.dir/dependente.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CRUD2.dir/dependente.c.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joao\CLionProjects\CRUD2\dependente.c -o CMakeFiles\CRUD2.dir\dependente.c.s

# Object files for target CRUD2
CRUD2_OBJECTS = \
"CMakeFiles/CRUD2.dir/main.c.obj" \
"CMakeFiles/CRUD2.dir/funcionario.c.obj" \
"CMakeFiles/CRUD2.dir/dependente.c.obj"

# External object files for target CRUD2
CRUD2_EXTERNAL_OBJECTS =

CRUD2.exe: CMakeFiles/CRUD2.dir/main.c.obj
CRUD2.exe: CMakeFiles/CRUD2.dir/funcionario.c.obj
CRUD2.exe: CMakeFiles/CRUD2.dir/dependente.c.obj
CRUD2.exe: CMakeFiles/CRUD2.dir/build.make
CRUD2.exe: CMakeFiles/CRUD2.dir/linklibs.rsp
CRUD2.exe: CMakeFiles/CRUD2.dir/objects1.rsp
CRUD2.exe: CMakeFiles/CRUD2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable CRUD2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CRUD2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CRUD2.dir/build: CRUD2.exe

.PHONY : CMakeFiles/CRUD2.dir/build

CMakeFiles/CRUD2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CRUD2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CRUD2.dir/clean

CMakeFiles/CRUD2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\joao\CLionProjects\CRUD2 C:\Users\joao\CLionProjects\CRUD2 C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug C:\Users\joao\CLionProjects\CRUD2\cmake-build-debug\CMakeFiles\CRUD2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CRUD2.dir/depend

