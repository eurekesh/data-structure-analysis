# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ChainHash.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ChainHash.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ChainHash.dir/flags.make

CMakeFiles/ChainHash.dir/driver.cpp.o: CMakeFiles/ChainHash.dir/flags.make
CMakeFiles/ChainHash.dir/driver.cpp.o: ../driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ChainHash.dir/driver.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChainHash.dir/driver.cpp.o -c "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/driver.cpp"

CMakeFiles/ChainHash.dir/driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChainHash.dir/driver.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/driver.cpp" > CMakeFiles/ChainHash.dir/driver.cpp.i

CMakeFiles/ChainHash.dir/driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChainHash.dir/driver.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/driver.cpp" -o CMakeFiles/ChainHash.dir/driver.cpp.s

CMakeFiles/ChainHash.dir/hash.cpp.o: CMakeFiles/ChainHash.dir/flags.make
CMakeFiles/ChainHash.dir/hash.cpp.o: ../hash.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ChainHash.dir/hash.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChainHash.dir/hash.cpp.o -c "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/hash.cpp"

CMakeFiles/ChainHash.dir/hash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChainHash.dir/hash.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/hash.cpp" > CMakeFiles/ChainHash.dir/hash.cpp.i

CMakeFiles/ChainHash.dir/hash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChainHash.dir/hash.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/hash.cpp" -o CMakeFiles/ChainHash.dir/hash.cpp.s

# Object files for target ChainHash
ChainHash_OBJECTS = \
"CMakeFiles/ChainHash.dir/driver.cpp.o" \
"CMakeFiles/ChainHash.dir/hash.cpp.o"

# External object files for target ChainHash
ChainHash_EXTERNAL_OBJECTS =

ChainHash: CMakeFiles/ChainHash.dir/driver.cpp.o
ChainHash: CMakeFiles/ChainHash.dir/hash.cpp.o
ChainHash: CMakeFiles/ChainHash.dir/build.make
ChainHash: CMakeFiles/ChainHash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ChainHash"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChainHash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ChainHash.dir/build: ChainHash

.PHONY : CMakeFiles/ChainHash.dir/build

CMakeFiles/ChainHash.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ChainHash.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ChainHash.dir/clean

CMakeFiles/ChainHash.dir/depend:
	cd "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash" "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash" "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug" "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug" "/Users/ash/Desktop/Boulder/CSCI/CSCI 2270/duy_ashlyn_project/code/ChainHash/cmake-build-debug/CMakeFiles/ChainHash.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ChainHash.dir/depend

