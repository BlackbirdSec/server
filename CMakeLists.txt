# minimum version cmake
cmake_minimum_required(VERSION 3.16)

# description project
project(blackbird VERSION 1.0.0 LANGUAGES CXX)

# set compiler C++ v17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# subdirectories
foreach(dir IN ITEMS hwinfo modules/bscan)
  add_subdirectory(${dir})
endforeach()


# includes
include_directories(
  hwinfo/include
  modules/bscan/include
  )

# main
add_executable(blackbird main.cpp)
# link to libs
target_link_libraries(blackbird PUBLIC hwinfo::HWinfo bscan::BScan)

