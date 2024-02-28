cmake_minimum_required(VERSION 3.27)
project(RPG_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPG_Game main.cpp
        CombatSystem/CombatSystem.cpp
        Character/Character.cpp)
