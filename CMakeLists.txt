cmake_minimum_required(VERSION 4.3)
project(oop_design_final)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop_design_final main.cpp
        Tower.cpp
        Tower.h
        Wave.cpp
        Wave.h
        Enemy.cpp
        Enemy.h
        Orc.cpp
        Orc.h
        Ghost.cpp
        Ghost.h
        IWeapon.cpp
        IWeapon.h
        Cannon.cpp
        Cannon.h)
