# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/QUICKSORT_TEMPLATE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QUICKSORT_TEMPLATE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QUICKSORT_TEMPLATE.dir/flags.make

CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.obj: CMakeFiles/QUICKSORT_TEMPLATE.dir/flags.make
CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QUICKSORT_TEMPLATE.dir\main.cpp.obj -c C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\main.cpp

CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\main.cpp > CMakeFiles\QUICKSORT_TEMPLATE.dir\main.cpp.i

CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\main.cpp -o CMakeFiles\QUICKSORT_TEMPLATE.dir\main.cpp.s

CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.obj: CMakeFiles/QUICKSORT_TEMPLATE.dir/flags.make
CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.obj: ../QuickSort-test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QUICKSORT_TEMPLATE.dir\QuickSort-test.cpp.obj -c C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\QuickSort-test.cpp

CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\QuickSort-test.cpp > CMakeFiles\QUICKSORT_TEMPLATE.dir\QuickSort-test.cpp.i

CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\QuickSort-test.cpp -o CMakeFiles\QUICKSORT_TEMPLATE.dir\QuickSort-test.cpp.s

# Object files for target QUICKSORT_TEMPLATE
QUICKSORT_TEMPLATE_OBJECTS = \
"CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.obj" \
"CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.obj"

# External object files for target QUICKSORT_TEMPLATE
QUICKSORT_TEMPLATE_EXTERNAL_OBJECTS =

QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/main.cpp.obj
QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/QuickSort-test.cpp.obj
QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/build.make
QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/linklibs.rsp
QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/objects1.rsp
QUICKSORT_TEMPLATE.exe: CMakeFiles/QUICKSORT_TEMPLATE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable QUICKSORT_TEMPLATE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QUICKSORT_TEMPLATE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QUICKSORT_TEMPLATE.dir/build: QUICKSORT_TEMPLATE.exe

.PHONY : CMakeFiles/QUICKSORT_TEMPLATE.dir/build

CMakeFiles/QUICKSORT_TEMPLATE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QUICKSORT_TEMPLATE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QUICKSORT_TEMPLATE.dir/clean

CMakeFiles/QUICKSORT_TEMPLATE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug C:\Users\felix\templates-FJ98\QUICKSORT_TEMPLATE\cmake-build-debug\CMakeFiles\QUICKSORT_TEMPLATE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QUICKSORT_TEMPLATE.dir/depend

