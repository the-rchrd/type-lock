# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/therchrd/Documents/Code/type-lock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/therchrd/Documents/Code/type-lock/build

# Include any dependencies generated for this target.
include CMakeFiles/type-lock.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/type-lock.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/type-lock.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/type-lock.dir/flags.make

CMakeFiles/type-lock.dir/codegen:
.PHONY : CMakeFiles/type-lock.dir/codegen

CMakeFiles/type-lock.dir/main.cpp.o: CMakeFiles/type-lock.dir/flags.make
CMakeFiles/type-lock.dir/main.cpp.o: /Users/therchrd/Documents/Code/type-lock/main.cpp
CMakeFiles/type-lock.dir/main.cpp.o: CMakeFiles/type-lock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/type-lock.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/type-lock.dir/main.cpp.o -MF CMakeFiles/type-lock.dir/main.cpp.o.d -o CMakeFiles/type-lock.dir/main.cpp.o -c /Users/therchrd/Documents/Code/type-lock/main.cpp

CMakeFiles/type-lock.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/type-lock.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/therchrd/Documents/Code/type-lock/main.cpp > CMakeFiles/type-lock.dir/main.cpp.i

CMakeFiles/type-lock.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/type-lock.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/therchrd/Documents/Code/type-lock/main.cpp -o CMakeFiles/type-lock.dir/main.cpp.s

CMakeFiles/type-lock.dir/src/window.cpp.o: CMakeFiles/type-lock.dir/flags.make
CMakeFiles/type-lock.dir/src/window.cpp.o: /Users/therchrd/Documents/Code/type-lock/src/window.cpp
CMakeFiles/type-lock.dir/src/window.cpp.o: CMakeFiles/type-lock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/type-lock.dir/src/window.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/type-lock.dir/src/window.cpp.o -MF CMakeFiles/type-lock.dir/src/window.cpp.o.d -o CMakeFiles/type-lock.dir/src/window.cpp.o -c /Users/therchrd/Documents/Code/type-lock/src/window.cpp

CMakeFiles/type-lock.dir/src/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/type-lock.dir/src/window.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/therchrd/Documents/Code/type-lock/src/window.cpp > CMakeFiles/type-lock.dir/src/window.cpp.i

CMakeFiles/type-lock.dir/src/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/type-lock.dir/src/window.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/therchrd/Documents/Code/type-lock/src/window.cpp -o CMakeFiles/type-lock.dir/src/window.cpp.s

CMakeFiles/type-lock.dir/src/solver.cpp.o: CMakeFiles/type-lock.dir/flags.make
CMakeFiles/type-lock.dir/src/solver.cpp.o: /Users/therchrd/Documents/Code/type-lock/src/solver.cpp
CMakeFiles/type-lock.dir/src/solver.cpp.o: CMakeFiles/type-lock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/type-lock.dir/src/solver.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/type-lock.dir/src/solver.cpp.o -MF CMakeFiles/type-lock.dir/src/solver.cpp.o.d -o CMakeFiles/type-lock.dir/src/solver.cpp.o -c /Users/therchrd/Documents/Code/type-lock/src/solver.cpp

CMakeFiles/type-lock.dir/src/solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/type-lock.dir/src/solver.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/therchrd/Documents/Code/type-lock/src/solver.cpp > CMakeFiles/type-lock.dir/src/solver.cpp.i

CMakeFiles/type-lock.dir/src/solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/type-lock.dir/src/solver.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/therchrd/Documents/Code/type-lock/src/solver.cpp -o CMakeFiles/type-lock.dir/src/solver.cpp.s

CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o: CMakeFiles/type-lock.dir/flags.make
CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o: /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shader.cpp
CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o: CMakeFiles/type-lock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o -MF CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o.d -o CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o -c /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shader.cpp

CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shader.cpp > CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.i

CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shader.cpp -o CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.s

CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o: CMakeFiles/type-lock.dir/flags.make
CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o: /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shape.cpp
CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o: CMakeFiles/type-lock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o -MF CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o.d -o CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o -c /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shape.cpp

CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shape.cpp > CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.i

CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/therchrd/Documents/Code/type-lock/src/graphics/inheritance/shape.cpp -o CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.s

# Object files for target type-lock
type__lock_OBJECTS = \
"CMakeFiles/type-lock.dir/main.cpp.o" \
"CMakeFiles/type-lock.dir/src/window.cpp.o" \
"CMakeFiles/type-lock.dir/src/solver.cpp.o" \
"CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o" \
"CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o"

# External object files for target type-lock
type__lock_EXTERNAL_OBJECTS =

type-lock: CMakeFiles/type-lock.dir/main.cpp.o
type-lock: CMakeFiles/type-lock.dir/src/window.cpp.o
type-lock: CMakeFiles/type-lock.dir/src/solver.cpp.o
type-lock: CMakeFiles/type-lock.dir/src/graphics/inheritance/shader.cpp.o
type-lock: CMakeFiles/type-lock.dir/src/graphics/inheritance/shape.cpp.o
type-lock: CMakeFiles/type-lock.dir/build.make
type-lock: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX15.2.sdk/System/Library/Frameworks/OpenGL.framework
type-lock: /opt/homebrew/lib/libGLEW.2.2.0.dylib
type-lock: /opt/homebrew/lib/libglm.dylib
type-lock: CMakeFiles/type-lock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/therchrd/Documents/Code/type-lock/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable type-lock"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/type-lock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/type-lock.dir/build: type-lock
.PHONY : CMakeFiles/type-lock.dir/build

CMakeFiles/type-lock.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/type-lock.dir/cmake_clean.cmake
.PHONY : CMakeFiles/type-lock.dir/clean

CMakeFiles/type-lock.dir/depend:
	cd /Users/therchrd/Documents/Code/type-lock/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/therchrd/Documents/Code/type-lock /Users/therchrd/Documents/Code/type-lock /Users/therchrd/Documents/Code/type-lock/build /Users/therchrd/Documents/Code/type-lock/build /Users/therchrd/Documents/Code/type-lock/build/CMakeFiles/type-lock.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/type-lock.dir/depend

