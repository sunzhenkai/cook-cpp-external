PROJECT(cook-cpp-external)
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

include(external/fmt/load.cmake)
include(external/boost/load.cmake)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE fmt::fmt
        #        boost::system
        )