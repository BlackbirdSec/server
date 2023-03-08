# minimum version cmake
cmake_minimum_required(VERSION 3.16)

# description project
project(BlackBird VERSION 1.0.0 LANGUAGES CXX)

# set compiler C++ v17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# subdirectories
add_subdirectory(hwinfo
    modules/bscan
  )

# includes
include_directories(
  hwinfo/include
  modules/bscan/include
  )

# main
add_executable(blackbird main.cpp)
# link to libs
target_link_libraries(blackbird PUBLIC hwinfo::HWinfo bscan::BScan)

