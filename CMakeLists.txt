cmake_minimum_required(VERSION 3.17)
project(FireSimulation)

set(CMAKE_CXX_STANDARD 14)

add_executable(FireSimulation source/main.cpp
        source/Grid.cpp
        source/Cell.cpp
        source/Empty.cpp
        source/Tree.cpp
        source/Burning.cpp
        header/Grid.h
        header/Cell.h
        header/Empty.h
        header/Tree.h
        header/Burning.h
        source/Simulation.cpp
        header/Simulation.h
        source/State.cpp
        header/State.h)