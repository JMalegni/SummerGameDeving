# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.1.3\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jwmal\SummerGameDeving\SummerGameDeving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SummerGameDev.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SummerGameDev.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SummerGameDev.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SummerGameDev.dir/flags.make

CMakeFiles/SummerGameDev.dir/main.cpp.obj: CMakeFiles/SummerGameDev.dir/flags.make
CMakeFiles/SummerGameDev.dir/main.cpp.obj: CMakeFiles/SummerGameDev.dir/includes_CXX.rsp
CMakeFiles/SummerGameDev.dir/main.cpp.obj: C:/Users/jwmal/SummerGameDeving/SummerGameDeving/main.cpp
CMakeFiles/SummerGameDev.dir/main.cpp.obj: CMakeFiles/SummerGameDev.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SummerGameDev.dir/main.cpp.obj"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SummerGameDev.dir/main.cpp.obj -MF CMakeFiles\SummerGameDev.dir\main.cpp.obj.d -o CMakeFiles\SummerGameDev.dir\main.cpp.obj -c C:\Users\jwmal\SummerGameDeving\SummerGameDeving\main.cpp

CMakeFiles/SummerGameDev.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SummerGameDev.dir/main.cpp.i"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jwmal\SummerGameDeving\SummerGameDeving\main.cpp > CMakeFiles\SummerGameDev.dir\main.cpp.i

CMakeFiles/SummerGameDev.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SummerGameDev.dir/main.cpp.s"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jwmal\SummerGameDeving\SummerGameDeving\main.cpp -o CMakeFiles\SummerGameDev.dir\main.cpp.s

CMakeFiles/SummerGameDev.dir/Game.cpp.obj: CMakeFiles/SummerGameDev.dir/flags.make
CMakeFiles/SummerGameDev.dir/Game.cpp.obj: CMakeFiles/SummerGameDev.dir/includes_CXX.rsp
CMakeFiles/SummerGameDev.dir/Game.cpp.obj: C:/Users/jwmal/SummerGameDeving/SummerGameDeving/Game.cpp
CMakeFiles/SummerGameDev.dir/Game.cpp.obj: CMakeFiles/SummerGameDev.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SummerGameDev.dir/Game.cpp.obj"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SummerGameDev.dir/Game.cpp.obj -MF CMakeFiles\SummerGameDev.dir\Game.cpp.obj.d -o CMakeFiles\SummerGameDev.dir\Game.cpp.obj -c C:\Users\jwmal\SummerGameDeving\SummerGameDeving\Game.cpp

CMakeFiles/SummerGameDev.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SummerGameDev.dir/Game.cpp.i"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jwmal\SummerGameDeving\SummerGameDeving\Game.cpp > CMakeFiles\SummerGameDev.dir\Game.cpp.i

CMakeFiles/SummerGameDev.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SummerGameDev.dir/Game.cpp.s"
	C:\SFML\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jwmal\SummerGameDeving\SummerGameDeving\Game.cpp -o CMakeFiles\SummerGameDev.dir\Game.cpp.s

# Object files for target SummerGameDev
SummerGameDev_OBJECTS = \
"CMakeFiles/SummerGameDev.dir/main.cpp.obj" \
"CMakeFiles/SummerGameDev.dir/Game.cpp.obj"

# External object files for target SummerGameDev
SummerGameDev_EXTERNAL_OBJECTS =

SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/main.cpp.obj
SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/Game.cpp.obj
SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/build.make
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-system-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-window-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-graphics-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-audio-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-window-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libfreetype.a
SummerGameDev.exe: C:/SFML/SFML/lib/libsfml-system-s-d.a
SummerGameDev.exe: C:/SFML/SFML/lib/libopenal32.a
SummerGameDev.exe: C:/SFML/SFML/lib/libvorbisfile.a
SummerGameDev.exe: C:/SFML/SFML/lib/libvorbisenc.a
SummerGameDev.exe: C:/SFML/SFML/lib/libvorbis.a
SummerGameDev.exe: C:/SFML/SFML/lib/libogg.a
SummerGameDev.exe: C:/SFML/SFML/lib/libFLAC.a
SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/linkLibs.rsp
SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/objects1
SummerGameDev.exe: CMakeFiles/SummerGameDev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SummerGameDev.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SummerGameDev.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SummerGameDev.dir/build: SummerGameDev.exe
.PHONY : CMakeFiles/SummerGameDev.dir/build

CMakeFiles/SummerGameDev.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SummerGameDev.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SummerGameDev.dir/clean

CMakeFiles/SummerGameDev.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jwmal\SummerGameDeving\SummerGameDeving C:\Users\jwmal\SummerGameDeving\SummerGameDeving C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug C:\Users\jwmal\SummerGameDeving\SummerGameDeving\cmake-build-debug\CMakeFiles\SummerGameDev.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SummerGameDev.dir/depend
