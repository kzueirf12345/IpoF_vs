# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/urodish/programming/IpoF_vs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/urodish/programming/IpoF_vs/build

# Include any dependencies generated for this target.
include classes/CMakeFiles/cls.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include classes/CMakeFiles/cls.dir/compiler_depend.make

# Include the progress variables for this target.
include classes/CMakeFiles/cls.dir/progress.make

# Include the compile flags for this target's objects.
include classes/CMakeFiles/cls.dir/flags.make

classes/CMakeFiles/cls.dir/Coordinate.cpp.o: classes/CMakeFiles/cls.dir/flags.make
classes/CMakeFiles/cls.dir/Coordinate.cpp.o: /home/urodish/programming/IpoF_vs/classes/Coordinate.cpp
classes/CMakeFiles/cls.dir/Coordinate.cpp.o: classes/CMakeFiles/cls.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object classes/CMakeFiles/cls.dir/Coordinate.cpp.o"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT classes/CMakeFiles/cls.dir/Coordinate.cpp.o -MF CMakeFiles/cls.dir/Coordinate.cpp.o.d -o CMakeFiles/cls.dir/Coordinate.cpp.o -c /home/urodish/programming/IpoF_vs/classes/Coordinate.cpp

classes/CMakeFiles/cls.dir/Coordinate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cls.dir/Coordinate.cpp.i"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/urodish/programming/IpoF_vs/classes/Coordinate.cpp > CMakeFiles/cls.dir/Coordinate.cpp.i

classes/CMakeFiles/cls.dir/Coordinate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cls.dir/Coordinate.cpp.s"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/urodish/programming/IpoF_vs/classes/Coordinate.cpp -o CMakeFiles/cls.dir/Coordinate.cpp.s

classes/CMakeFiles/cls.dir/Cell.cpp.o: classes/CMakeFiles/cls.dir/flags.make
classes/CMakeFiles/cls.dir/Cell.cpp.o: /home/urodish/programming/IpoF_vs/classes/Cell.cpp
classes/CMakeFiles/cls.dir/Cell.cpp.o: classes/CMakeFiles/cls.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object classes/CMakeFiles/cls.dir/Cell.cpp.o"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT classes/CMakeFiles/cls.dir/Cell.cpp.o -MF CMakeFiles/cls.dir/Cell.cpp.o.d -o CMakeFiles/cls.dir/Cell.cpp.o -c /home/urodish/programming/IpoF_vs/classes/Cell.cpp

classes/CMakeFiles/cls.dir/Cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cls.dir/Cell.cpp.i"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/urodish/programming/IpoF_vs/classes/Cell.cpp > CMakeFiles/cls.dir/Cell.cpp.i

classes/CMakeFiles/cls.dir/Cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cls.dir/Cell.cpp.s"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/urodish/programming/IpoF_vs/classes/Cell.cpp -o CMakeFiles/cls.dir/Cell.cpp.s

classes/CMakeFiles/cls.dir/Crystal.cpp.o: classes/CMakeFiles/cls.dir/flags.make
classes/CMakeFiles/cls.dir/Crystal.cpp.o: /home/urodish/programming/IpoF_vs/classes/Crystal.cpp
classes/CMakeFiles/cls.dir/Crystal.cpp.o: classes/CMakeFiles/cls.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object classes/CMakeFiles/cls.dir/Crystal.cpp.o"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT classes/CMakeFiles/cls.dir/Crystal.cpp.o -MF CMakeFiles/cls.dir/Crystal.cpp.o.d -o CMakeFiles/cls.dir/Crystal.cpp.o -c /home/urodish/programming/IpoF_vs/classes/Crystal.cpp

classes/CMakeFiles/cls.dir/Crystal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cls.dir/Crystal.cpp.i"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/urodish/programming/IpoF_vs/classes/Crystal.cpp > CMakeFiles/cls.dir/Crystal.cpp.i

classes/CMakeFiles/cls.dir/Crystal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cls.dir/Crystal.cpp.s"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/urodish/programming/IpoF_vs/classes/Crystal.cpp -o CMakeFiles/cls.dir/Crystal.cpp.s

classes/CMakeFiles/cls.dir/Constants.cpp.o: classes/CMakeFiles/cls.dir/flags.make
classes/CMakeFiles/cls.dir/Constants.cpp.o: /home/urodish/programming/IpoF_vs/classes/Constants.cpp
classes/CMakeFiles/cls.dir/Constants.cpp.o: classes/CMakeFiles/cls.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object classes/CMakeFiles/cls.dir/Constants.cpp.o"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT classes/CMakeFiles/cls.dir/Constants.cpp.o -MF CMakeFiles/cls.dir/Constants.cpp.o.d -o CMakeFiles/cls.dir/Constants.cpp.o -c /home/urodish/programming/IpoF_vs/classes/Constants.cpp

classes/CMakeFiles/cls.dir/Constants.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cls.dir/Constants.cpp.i"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/urodish/programming/IpoF_vs/classes/Constants.cpp > CMakeFiles/cls.dir/Constants.cpp.i

classes/CMakeFiles/cls.dir/Constants.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cls.dir/Constants.cpp.s"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/urodish/programming/IpoF_vs/classes/Constants.cpp -o CMakeFiles/cls.dir/Constants.cpp.s

classes/CMakeFiles/cls.dir/Atom.cpp.o: classes/CMakeFiles/cls.dir/flags.make
classes/CMakeFiles/cls.dir/Atom.cpp.o: /home/urodish/programming/IpoF_vs/classes/Atom.cpp
classes/CMakeFiles/cls.dir/Atom.cpp.o: classes/CMakeFiles/cls.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object classes/CMakeFiles/cls.dir/Atom.cpp.o"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT classes/CMakeFiles/cls.dir/Atom.cpp.o -MF CMakeFiles/cls.dir/Atom.cpp.o.d -o CMakeFiles/cls.dir/Atom.cpp.o -c /home/urodish/programming/IpoF_vs/classes/Atom.cpp

classes/CMakeFiles/cls.dir/Atom.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cls.dir/Atom.cpp.i"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/urodish/programming/IpoF_vs/classes/Atom.cpp > CMakeFiles/cls.dir/Atom.cpp.i

classes/CMakeFiles/cls.dir/Atom.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cls.dir/Atom.cpp.s"
	cd /home/urodish/programming/IpoF_vs/build/classes && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/urodish/programming/IpoF_vs/classes/Atom.cpp -o CMakeFiles/cls.dir/Atom.cpp.s

# Object files for target cls
cls_OBJECTS = \
"CMakeFiles/cls.dir/Coordinate.cpp.o" \
"CMakeFiles/cls.dir/Cell.cpp.o" \
"CMakeFiles/cls.dir/Crystal.cpp.o" \
"CMakeFiles/cls.dir/Constants.cpp.o" \
"CMakeFiles/cls.dir/Atom.cpp.o"

# External object files for target cls
cls_EXTERNAL_OBJECTS =

classes/libcls.a: classes/CMakeFiles/cls.dir/Coordinate.cpp.o
classes/libcls.a: classes/CMakeFiles/cls.dir/Cell.cpp.o
classes/libcls.a: classes/CMakeFiles/cls.dir/Crystal.cpp.o
classes/libcls.a: classes/CMakeFiles/cls.dir/Constants.cpp.o
classes/libcls.a: classes/CMakeFiles/cls.dir/Atom.cpp.o
classes/libcls.a: classes/CMakeFiles/cls.dir/build.make
classes/libcls.a: classes/CMakeFiles/cls.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/urodish/programming/IpoF_vs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libcls.a"
	cd /home/urodish/programming/IpoF_vs/build/classes && $(CMAKE_COMMAND) -P CMakeFiles/cls.dir/cmake_clean_target.cmake
	cd /home/urodish/programming/IpoF_vs/build/classes && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cls.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
classes/CMakeFiles/cls.dir/build: classes/libcls.a
.PHONY : classes/CMakeFiles/cls.dir/build

classes/CMakeFiles/cls.dir/clean:
	cd /home/urodish/programming/IpoF_vs/build/classes && $(CMAKE_COMMAND) -P CMakeFiles/cls.dir/cmake_clean.cmake
.PHONY : classes/CMakeFiles/cls.dir/clean

classes/CMakeFiles/cls.dir/depend:
	cd /home/urodish/programming/IpoF_vs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/urodish/programming/IpoF_vs /home/urodish/programming/IpoF_vs/classes /home/urodish/programming/IpoF_vs/build /home/urodish/programming/IpoF_vs/build/classes /home/urodish/programming/IpoF_vs/build/classes/CMakeFiles/cls.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : classes/CMakeFiles/cls.dir/depend

