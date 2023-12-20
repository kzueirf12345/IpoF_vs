cmake_minimum_required(VERSION 3.0.0)
project(IpoF_vs VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(classes)
add_executable(main main.cpp)
#SET(GCC_COVERAGE_COMPILE_FLAGS "-O3 -funroll-loop")
#SET(GCC_COVERAGE_LINK_FLAGS)
target_link_libraries(main PUBLIC cls)