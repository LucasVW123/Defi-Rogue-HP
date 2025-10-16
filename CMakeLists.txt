# Version minimale de CMake requise
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(OutilRogueHP VERSION 1.0)

# Spécifier la norme C++ à utiliser (C++11 est un bon standard)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Définir l'exécutable
# OutilRogueHP est le nom de l'exécutable qui sera créé
# main.cpp est le fichier source
add_executable(OutilRogueHP main.cpp)