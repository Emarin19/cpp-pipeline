cmake_minimum_required(VERSION 3.9)
project(sonar_cloud_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(sonar_scanner_example main.cpp)