cmake_minimum_required(VERSION 3.24)
project(SummerGameDev)

set(CMAKE_CXX_STANDARD 14)

add_executable(SummerGameDev main.cpp Game.cpp Game.h ProjectState.cpp ProjectState.h Characters.cpp Characters.h)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(c:/SFML/include/SFML)
target_link_libraries(SummerGameDev sfml-system sfml-window sfml-graphics sfml-audio)