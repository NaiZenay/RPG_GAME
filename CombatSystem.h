
//
// Created by Ian on 2/15/2024.
//

#ifndef RPG_GAME_COMBATSYSTEM_H
#define RPG_GAME_COMBATSYSTEM_H

#include "Character.h"
#include <vector>

class CombatSystem {
public:
    static vector <Character> characters;
    ~CombatSystem() = default;

    static vector<Character>getCharacters(){
        return characters;
    }
    void addCharacter() ;
    void setTurns();
    void printCharacters();
    bool checkCombatStatus() {
        //TODO
        return false;
    }
    void menu();
    void startCombat(vector<Character>);

    Character choseTarget();
};


#endif //RPG_GAME_COMBATSYSTEM_H
