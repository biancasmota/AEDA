# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = C:\Users\julia\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.7142.39\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\julia\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.7142.39\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/flags.make

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/flags.make
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/includes_CXX.rsp
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj: ../lib/googletest-master/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj"
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gtest.dir\src\gtest-all.cc.obj -c C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\lib\googletest-master\googletest\src\gtest-all.cc

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\lib\googletest-master\googletest\src\gtest-all.cc > CMakeFiles\gtest.dir\src\gtest-all.cc.i

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\lib\googletest-master\googletest\src\gtest-all.cc -o CMakeFiles\gtest.dir\src\gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.obj"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.obj
lib/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build.make
lib/libgtestd.a: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\libgtestd.a"
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean_target.cmake
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build: lib/libgtestd.a

.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/clean:
	cd /d C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest && $(CMAKE_COMMAND) -P CMakeFiles\gtest.dir\cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/clean

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09 C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\lib\googletest-master\googletest C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest C:\Users\julia\OneDrive\Documentos\AEDA\Exercises\aeda1920_fp09\cmake-build-debug\lib\googletest-master\googlemock\gtest\CMakeFiles\gtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/depend

