//
// Created by Ian on 3/15/2024.
//

#ifndef RPG_GAME_CLASS_H
#define RPG_GAME_CLASS_H

#include "iostream"
#include "../Artefacts/Wepons/Wepons.h"

using namespace std;

class Class {
    string name;
    Wepons wepon;
public:
    const string &getName() const;

    void setName(const string &name);

    const Wepons &getWepon() const;

    void setWepon(const Wepons &wepon);
};


#endif //RPG_GAME_CLASS_H
