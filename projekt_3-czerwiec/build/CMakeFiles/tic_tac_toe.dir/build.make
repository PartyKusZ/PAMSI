# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build

# Include any dependencies generated for this target.
include CMakeFiles/tic_tac_toe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tic_tac_toe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tic_tac_toe.dir/flags.make

CMakeFiles/tic_tac_toe.dir/src/main.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tic_tac_toe.dir/src/main.cpp.o -c /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/main.cpp

CMakeFiles/tic_tac_toe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/main.cpp > CMakeFiles/tic_tac_toe.dir/src/main.cpp.i

CMakeFiles/tic_tac_toe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/main.cpp -o CMakeFiles/tic_tac_toe.dir/src/main.cpp.s

CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o: ../src/t_gameboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o -c /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/t_gameboard.cpp

CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/t_gameboard.cpp > CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.i

CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/src/t_gameboard.cpp -o CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.s

# Object files for target tic_tac_toe
tic_tac_toe_OBJECTS = \
"CMakeFiles/tic_tac_toe.dir/src/main.cpp.o" \
"CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o"

# External object files for target tic_tac_toe
tic_tac_toe_EXTERNAL_OBJECTS =

tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/main.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/t_gameboard.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/build.make
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tic_tac_toe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tic_tac_toe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tic_tac_toe.dir/build: tic_tac_toe

.PHONY : CMakeFiles/tic_tac_toe.dir/build

CMakeFiles/tic_tac_toe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tic_tac_toe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tic_tac_toe.dir/clean

CMakeFiles/tic_tac_toe.dir/depend:
	cd /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build /home/kubus/Pulpit/SEM4/PAMSI/projekt_3-czerwiec/build/CMakeFiles/tic_tac_toe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tic_tac_toe.dir/depend
