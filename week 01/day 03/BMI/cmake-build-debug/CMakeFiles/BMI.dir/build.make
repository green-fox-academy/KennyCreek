# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BMI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BMI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BMI.dir/flags.make

CMakeFiles/BMI.dir/main.cpp.obj: CMakeFiles/BMI.dir/flags.make
CMakeFiles/BMI.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BMI.dir/main.cpp.obj"
	C:\MinGW\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BMI.dir\main.cpp.obj -c "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\main.cpp"

CMakeFiles/BMI.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BMI.dir/main.cpp.i"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\main.cpp" > CMakeFiles\BMI.dir\main.cpp.i

CMakeFiles/BMI.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BMI.dir/main.cpp.s"
	C:\MinGW\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\main.cpp" -o CMakeFiles\BMI.dir\main.cpp.s

# Object files for target BMI
BMI_OBJECTS = \
"CMakeFiles/BMI.dir/main.cpp.obj"

# External object files for target BMI
BMI_EXTERNAL_OBJECTS =

BMI.exe: CMakeFiles/BMI.dir/main.cpp.obj
BMI.exe: CMakeFiles/BMI.dir/build.make
BMI.exe: CMakeFiles/BMI.dir/linklibs.rsp
BMI.exe: CMakeFiles/BMI.dir/objects1.rsp
BMI.exe: CMakeFiles/BMI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BMI.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BMI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BMI.dir/build: BMI.exe

.PHONY : CMakeFiles/BMI.dir/build

CMakeFiles/BMI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BMI.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BMI.dir/clean

CMakeFiles/BMI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI" "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI" "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug" "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug" "C:\Users\vezer\greenfox\KennyCreek\week 01\day 03\BMI\cmake-build-debug\CMakeFiles\BMI.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BMI.dir/depend

