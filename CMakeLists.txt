# Spécifier la version minimale de CMake
cmake_minimum_required(VERSION 3.18)

# Nom du projet
project(CICD)

# Spécifier le standard C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter l'exécutable
add_executable(CICD src/main.cpp)

