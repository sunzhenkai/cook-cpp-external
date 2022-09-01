PROJECT(cook-cpp-external)
CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

include(external/fmt/load.cmake)
include(external/boost/load.cmake)

add_executable(main src/main.cpp)
add_dependencies(main fmt)
target_link_libraries(main fmt::fmt)