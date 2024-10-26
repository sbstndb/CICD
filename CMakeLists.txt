# Spécifier la version minimale de CMake
cmake_minimum_required(VERSION 3.18)

# Nom du projet
project(CICD LANGUAGES C CXX)

# Spécifier le standard C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include(FetchContent)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

enable_testing()

add_subdirectory(src)
add_subdirectory(test)


