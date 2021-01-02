cmake_minimum_required(VERSION 3.10)

# set the project name
project(Bmaze)

include_directories("include")

set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(Bmaze src/map.cpp src/main.cpp include/utils.hpp src/utils.cpp src/player.cpp include/player.hpp src/engine.cpp include/engine.hpp src/logger.cpp include/logger.hpp)