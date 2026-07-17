cmake_minimum_required(VERSION 3.28)
project(cpp_classes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# Copies data files from resources/ to build/ so programs can open them by name.
# Re-run cmake .. if you add new files to resources/.
# file(COPY ${CMAKE_SOURCE_DIR}/resources/ DESTINATION ${CMAKE_BINARY_DIR})

# Project structure:
#   - Header files (.h)  → include/
#   - Source files (.cpp) → src/
#   - Data files          → resources/
#
# Add one line per assignment. For programs with multiple .cpp files,
# list them all space-separated after the program name.
# After any change to this file, re-run: cmake .. (from the build/ folder)
#
# Examples:
#   add_executable(a1 src/a1.cpp)
#   add_executable(a5 src/a5.cpp src/string_maker.cpp)
add_executable(go main.cpp bin.cpp)
# add_executable(main src/main.cpp)
