
//
// Created by Ian on 2/15/2024.
//

#ifndef RPG_GAME_COMBATSYSTEM_H
#define RPG_GAME_COMBATSYSTEM_H

#include "Character.h"
#include <vector>

class CombatSystem {
public:
    vector <Character> characters;
    ~CombatSystem() = default;

    void addCharacter() ;
    void setTurns();
    void getCharacters();
    bool checkCombatStatus() {
        //TODO
        return false;
    }
    void menu();
    void startCombat(vector<Character>);
};


#endif //RPG_GAME_COMBATSYSTEM_H
