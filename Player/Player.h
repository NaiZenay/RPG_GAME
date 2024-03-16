//
// Created by Ian on 3/15/2024.
//

#ifndef RPG_GAME_PLAYER_H
#define RPG_GAME_PLAYER_H

#include "../Character/Character.h"
#include "../Class/Class.h"
#include "../Artefacts/Wepons/Wepons.h"

class Player : Character {
private:
    float exp = 0;
    int level = 1;
    Class classType;

public:

    virtual void setAttack(int _attack) override;

    virtual void setHealth(int _health) override;

    virtual void setDefense(int _defense) override;


    float getExp();

    void setExp(float exp);

    int getLevel();

    void setLevel(int level);

    const Class &getClassType();

    void setClassType(Class &classType);

};


#endif //RPG_GAME_PLAYER_H
