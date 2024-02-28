
//
// Created by Ian on 2/15/2024.
//

#ifndef RPG_GAME_COMBATSYSTEM_H
#define RPG_GAME_COMBATSYSTEM_H

#include "../Character/Character.h"
#include <vector>

class Character;

class CombatSystem {

public:
    std::vector<Character> characters;
    ~CombatSystem() = default;
    void addCharacter() ;
    void setTurns();
    void printCharacters();
    bool checkCombatStatus() {
        //TODO
        return false;
    }
    void menu();
    void startCombat(std::vector<Character>);

};


#endif //RPG_GAME_COMBATSYSTEM_H
