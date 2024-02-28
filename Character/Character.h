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

    string getName() {
        return name;
    }

    void setName(string _name) {
        this->name = _name;
    }

    int getAttack() {
        return attack;
    }

    void setAttack(int _attack) {
        this->attack = _attack;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int _health) {
        this->health = _health;
    }

    int getDamage() {
        return damage;
    }

    void setDamage(int _damage) {
        this->damage += _damage;
        if (damage >= health) {
            this->die();
        } else {
            cout << this->getName() << " take " << _damage << " points of damage "
                 << this->getHealth() - this->getDamage() << " health points left" << endl;
        }
    }

    int getDefense() {
        return defense;
    }

    void setDefense(int _defense) {
        this->defense = _defense;
    }

    int getInitiative() {
        return initiative;
    }

    void setInitiative() {
        this->initiative = 1 + rand() % (21 - 1);
    }

    string toString() {
        return "Name: " + name + "\nHealth: " + to_string(health) + "\nAttack: " + to_string(attack) + "\nDefense: " +
               to_string(defense) + "\nInitiative: " + to_string(initiative);
    }

    Character choseTarget(std::vector<Character> targets);
    void attack_ing(Character target);
    void takeTurn();
    void die();
};

#endif //RPG_GAME_CHARACTER_H
