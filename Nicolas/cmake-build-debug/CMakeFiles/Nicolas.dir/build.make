# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/andresmoncada/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/andresmoncada/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nicolas.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Nicolas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nicolas.dir/flags.make

CMakeFiles/Nicolas.dir/tareaopc.cpp.o: CMakeFiles/Nicolas.dir/flags.make
CMakeFiles/Nicolas.dir/tareaopc.cpp.o: ../tareaopc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nicolas.dir/tareaopc.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Nicolas.dir/tareaopc.cpp.o -c /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/tareaopc.cpp

CMakeFiles/Nicolas.dir/tareaopc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nicolas.dir/tareaopc.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/tareaopc.cpp > CMakeFiles/Nicolas.dir/tareaopc.cpp.i

CMakeFiles/Nicolas.dir/tareaopc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nicolas.dir/tareaopc.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/tareaopc.cpp -o CMakeFiles/Nicolas.dir/tareaopc.cpp.s

# Object files for target Nicolas
Nicolas_OBJECTS = \
"CMakeFiles/Nicolas.dir/tareaopc.cpp.o"

# External object files for target Nicolas
Nicolas_EXTERNAL_OBJECTS =

Nicolas: CMakeFiles/Nicolas.dir/tareaopc.cpp.o
Nicolas: CMakeFiles/Nicolas.dir/build.make
Nicolas: CMakeFiles/Nicolas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nicolas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Nicolas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nicolas.dir/build: Nicolas
.PHONY : CMakeFiles/Nicolas.dir/build

CMakeFiles/Nicolas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Nicolas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Nicolas.dir/clean

CMakeFiles/Nicolas.dir/depend:
	cd /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug /Users/andresmoncada/CLionProjects/prog-avanzada-2-2021/Nicolas/cmake-build-debug/CMakeFiles/Nicolas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nicolas.dir/depend

