//
// Created by Ian on 2/13/2024.
//

#ifndef RPG_GAME_CHARACTER_H
#define RPG_GAME_CHARACTER_H

#include <string>
#include <iostream>
#include <vector>
#include "../CombatSystem/CombatSystem.h"

class CombatSystem;

using namespace std;

class Character {
private:
    string name;
    int health;
    int attack;
    int defense;
    int damage = 0;
    int initiative;

public:
    bool dead = false;

public:
    Character(string _name, int _health, int _attack, int _defense) {
        name = _name;
        health = _health;
        attack = _attack;
        defense = _defense;
    }

    Character() {}

    ~Character() {}

    string getName();

    void setName(string _name);


    int getAttack();

    virtual void setAttack(int _attack)=0;

    int getHealth();

    virtual void setHealth(int _health)=0;

    int getDamage();

    void setDamage(int _damage);

    int getDefense();

    virtual void setDefense(int _defense)=0;


    int getInitiative();

    void setInitiative();

    string toString();

    //Hacer virtual
    void attack_ing(Character target);

    void die();
};

#endif //RPG_GAME_CHARACTER_H
