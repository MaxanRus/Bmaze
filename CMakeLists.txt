cmake_minimum_required(VERSION 3.10)

# set the project name
project(Bmaze)

include_directories("include")

set(CMAKE_CXX_STANDARD 17)

# add the executable
add_executable(Bmaze src/engine/map.cpp src/main.cpp include/engine/utils.hpp src/engine/utils.cpp src/engine/player.cpp include/engine/player.hpp src/engine/engine.cpp include/engine/engine.hpp src/engine/logger.cpp include/engine/logger.hpp)