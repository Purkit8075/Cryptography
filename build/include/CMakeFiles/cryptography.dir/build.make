# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/purkit/Desktop/VsCode/CPP/Cryptography

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/purkit/Desktop/VsCode/CPP/Cryptography/build

# Include any dependencies generated for this target.
include include/CMakeFiles/cryptography.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include include/CMakeFiles/cryptography.dir/compiler_depend.make

# Include the progress variables for this target.
include include/CMakeFiles/cryptography.dir/progress.make

# Include the compile flags for this target's objects.
include include/CMakeFiles/cryptography.dir/flags.make

include/CMakeFiles/cryptography.dir/caesar.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/caesar.cpp.o: ../include/caesar.cpp
include/CMakeFiles/cryptography.dir/caesar.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/CMakeFiles/cryptography.dir/caesar.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/caesar.cpp.o -MF CMakeFiles/cryptography.dir/caesar.cpp.o.d -o CMakeFiles/cryptography.dir/caesar.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/caesar.cpp

include/CMakeFiles/cryptography.dir/caesar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/caesar.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/caesar.cpp > CMakeFiles/cryptography.dir/caesar.cpp.i

include/CMakeFiles/cryptography.dir/caesar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/caesar.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/caesar.cpp -o CMakeFiles/cryptography.dir/caesar.cpp.s

include/CMakeFiles/cryptography.dir/feistel.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/feistel.cpp.o: ../include/feistel.cpp
include/CMakeFiles/cryptography.dir/feistel.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object include/CMakeFiles/cryptography.dir/feistel.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/feistel.cpp.o -MF CMakeFiles/cryptography.dir/feistel.cpp.o.d -o CMakeFiles/cryptography.dir/feistel.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/feistel.cpp

include/CMakeFiles/cryptography.dir/feistel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/feistel.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/feistel.cpp > CMakeFiles/cryptography.dir/feistel.cpp.i

include/CMakeFiles/cryptography.dir/feistel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/feistel.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/feistel.cpp -o CMakeFiles/cryptography.dir/feistel.cpp.s

include/CMakeFiles/cryptography.dir/menu.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/menu.cpp.o: ../include/menu.cpp
include/CMakeFiles/cryptography.dir/menu.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object include/CMakeFiles/cryptography.dir/menu.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/menu.cpp.o -MF CMakeFiles/cryptography.dir/menu.cpp.o.d -o CMakeFiles/cryptography.dir/menu.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/menu.cpp

include/CMakeFiles/cryptography.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/menu.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/menu.cpp > CMakeFiles/cryptography.dir/menu.cpp.i

include/CMakeFiles/cryptography.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/menu.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/menu.cpp -o CMakeFiles/cryptography.dir/menu.cpp.s

include/CMakeFiles/cryptography.dir/playfair.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/playfair.cpp.o: ../include/playfair.cpp
include/CMakeFiles/cryptography.dir/playfair.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object include/CMakeFiles/cryptography.dir/playfair.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/playfair.cpp.o -MF CMakeFiles/cryptography.dir/playfair.cpp.o.d -o CMakeFiles/cryptography.dir/playfair.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/playfair.cpp

include/CMakeFiles/cryptography.dir/playfair.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/playfair.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/playfair.cpp > CMakeFiles/cryptography.dir/playfair.cpp.i

include/CMakeFiles/cryptography.dir/playfair.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/playfair.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/playfair.cpp -o CMakeFiles/cryptography.dir/playfair.cpp.s

include/CMakeFiles/cryptography.dir/public.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/public.cpp.o: ../include/public.cpp
include/CMakeFiles/cryptography.dir/public.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object include/CMakeFiles/cryptography.dir/public.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/public.cpp.o -MF CMakeFiles/cryptography.dir/public.cpp.o.d -o CMakeFiles/cryptography.dir/public.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/public.cpp

include/CMakeFiles/cryptography.dir/public.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/public.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/public.cpp > CMakeFiles/cryptography.dir/public.cpp.i

include/CMakeFiles/cryptography.dir/public.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/public.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/public.cpp -o CMakeFiles/cryptography.dir/public.cpp.s

include/CMakeFiles/cryptography.dir/vernam.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/vernam.cpp.o: ../include/vernam.cpp
include/CMakeFiles/cryptography.dir/vernam.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object include/CMakeFiles/cryptography.dir/vernam.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/vernam.cpp.o -MF CMakeFiles/cryptography.dir/vernam.cpp.o.d -o CMakeFiles/cryptography.dir/vernam.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vernam.cpp

include/CMakeFiles/cryptography.dir/vernam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/vernam.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vernam.cpp > CMakeFiles/cryptography.dir/vernam.cpp.i

include/CMakeFiles/cryptography.dir/vernam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/vernam.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vernam.cpp -o CMakeFiles/cryptography.dir/vernam.cpp.s

include/CMakeFiles/cryptography.dir/vigenere.cpp.o: include/CMakeFiles/cryptography.dir/flags.make
include/CMakeFiles/cryptography.dir/vigenere.cpp.o: ../include/vigenere.cpp
include/CMakeFiles/cryptography.dir/vigenere.cpp.o: include/CMakeFiles/cryptography.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object include/CMakeFiles/cryptography.dir/vigenere.cpp.o"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/cryptography.dir/vigenere.cpp.o -MF CMakeFiles/cryptography.dir/vigenere.cpp.o.d -o CMakeFiles/cryptography.dir/vigenere.cpp.o -c /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vigenere.cpp

include/CMakeFiles/cryptography.dir/vigenere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cryptography.dir/vigenere.cpp.i"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vigenere.cpp > CMakeFiles/cryptography.dir/vigenere.cpp.i

include/CMakeFiles/cryptography.dir/vigenere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cryptography.dir/vigenere.cpp.s"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/purkit/Desktop/VsCode/CPP/Cryptography/include/vigenere.cpp -o CMakeFiles/cryptography.dir/vigenere.cpp.s

# Object files for target cryptography
cryptography_OBJECTS = \
"CMakeFiles/cryptography.dir/caesar.cpp.o" \
"CMakeFiles/cryptography.dir/feistel.cpp.o" \
"CMakeFiles/cryptography.dir/menu.cpp.o" \
"CMakeFiles/cryptography.dir/playfair.cpp.o" \
"CMakeFiles/cryptography.dir/public.cpp.o" \
"CMakeFiles/cryptography.dir/vernam.cpp.o" \
"CMakeFiles/cryptography.dir/vigenere.cpp.o"

# External object files for target cryptography
cryptography_EXTERNAL_OBJECTS =

include/libcryptography.a: include/CMakeFiles/cryptography.dir/caesar.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/feistel.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/menu.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/playfair.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/public.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/vernam.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/vigenere.cpp.o
include/libcryptography.a: include/CMakeFiles/cryptography.dir/build.make
include/libcryptography.a: include/CMakeFiles/cryptography.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/purkit/Desktop/VsCode/CPP/Cryptography/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libcryptography.a"
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && $(CMAKE_COMMAND) -P CMakeFiles/cryptography.dir/cmake_clean_target.cmake
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cryptography.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/CMakeFiles/cryptography.dir/build: include/libcryptography.a
.PHONY : include/CMakeFiles/cryptography.dir/build

include/CMakeFiles/cryptography.dir/clean:
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include && $(CMAKE_COMMAND) -P CMakeFiles/cryptography.dir/cmake_clean.cmake
.PHONY : include/CMakeFiles/cryptography.dir/clean

include/CMakeFiles/cryptography.dir/depend:
	cd /home/purkit/Desktop/VsCode/CPP/Cryptography/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/purkit/Desktop/VsCode/CPP/Cryptography /home/purkit/Desktop/VsCode/CPP/Cryptography/include /home/purkit/Desktop/VsCode/CPP/Cryptography/build /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include /home/purkit/Desktop/VsCode/CPP/Cryptography/build/include/CMakeFiles/cryptography.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/CMakeFiles/cryptography.dir/depend

