# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = C:\Users\nico0\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\nico0\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nicolas.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Nicolas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nicolas.dir/flags.make

CMakeFiles/Nicolas.dir/prom12.cpp.obj: CMakeFiles/Nicolas.dir/flags.make
CMakeFiles/Nicolas.dir/prom12.cpp.obj: ../prom12.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nicolas.dir/prom12.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Nicolas.dir\prom12.cpp.obj -c E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\prom12.cpp

CMakeFiles/Nicolas.dir/prom12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nicolas.dir/prom12.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\prom12.cpp > CMakeFiles\Nicolas.dir\prom12.cpp.i

CMakeFiles/Nicolas.dir/prom12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nicolas.dir/prom12.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\prom12.cpp -o CMakeFiles\Nicolas.dir\prom12.cpp.s

# Object files for target Nicolas
Nicolas_OBJECTS = \
"CMakeFiles/Nicolas.dir/prom12.cpp.obj"

# External object files for target Nicolas
Nicolas_EXTERNAL_OBJECTS =

Nicolas.exe: CMakeFiles/Nicolas.dir/prom12.cpp.obj
Nicolas.exe: CMakeFiles/Nicolas.dir/build.make
Nicolas.exe: CMakeFiles/Nicolas.dir/linklibs.rsp
Nicolas.exe: CMakeFiles/Nicolas.dir/objects1.rsp
Nicolas.exe: CMakeFiles/Nicolas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nicolas.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nicolas.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nicolas.dir/build: Nicolas.exe
.PHONY : CMakeFiles/Nicolas.dir/build

CMakeFiles/Nicolas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nicolas.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nicolas.dir/clean

CMakeFiles/Nicolas.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug E:\Proyectos\C++\prog-avanzada-2-2021\Nicolas\cmake-build-debug\CMakeFiles\Nicolas.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nicolas.dir/depend

