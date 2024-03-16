//
// Created by Ian on 3/15/2024.
//

#ifndef RPG_GAME_PLAYER_H
#define RPG_GAME_PLAYER_H
#include "../Character/Character.h"
#include "../Class/Class.h"

class Player : Character {
private:
    float exp;
    int level;
    Class classType;

};


#endif //RPG_GAME_PLAYER_H
