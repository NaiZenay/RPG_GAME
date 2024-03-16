cmake_minimum_required(VERSION 3.27)
project(RPG_Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPG_Game main.cpp
        CombatSystem/CombatSystem.cpp
        Character/Character.cpp
        Player/Player.h
        Class/Class.h
        Player/Player.cpp
        Artefacts/Artefacts.h
        Artefacts/Artefacts.cpp
        Artefacts/Wepons/Wepons.h
        Artefacts/Wepons/Wepons.cpp
        Class/Knight/Knight.h
        Class/Knight/Knight.cpp
        Class/Class.cpp)
