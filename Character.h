//
// Created by Ian on 2/13/2024.
//

#ifndef RPG_GAME_CHARACTER_H
#define RPG_GAME_CHARACTER_H

#include <string>
#include <iostream>

using namespace std;

class Character {
private:
    string name;
    int health;
    int attack;
    int defense;
    int damage=0;
public:
    bool dead=false;

public:
    Character(string _name, int _health, int _attack, int _defense) {
        name = _name;
        health = _health;
        attack = _attack;
        defense = _defense;
    }

    string getName() {
        return name;
    }

    int getAttack() {
        return attack;
    }

    int getHealth() {
        return health;
    }

    int getDamage(){
        return damage;
    }

    void setDamage(int _damage){
        this->damage+=_damage;
        if (damage >= health){
            this->die();
        } else{
            cout<< this->getName()<< " take "<< _damage<<" points of damage "<< this->getHealth() - this->getDamage()<<" health points left" <<endl;
        }
    }

    int getDefense() {
        return defense;
    }

    string toString() {
        return "Name: " + name + "\nHealth: " + to_string(health) + "\nAttack: " + to_string(attack) + "\nDefense: " +
               to_string(defense);
    }

    void attack_ing(Character *target) {
        cout << this->getName() <<" stabs "<<target->getName() <<endl;
        target->setDamage(getAttack() - target->getDefense());
    }

    void takeTurn(Character *target){
        int action;
        cout<< "Chose your action "<< this->getName()<<" \n 1)Attack"<<endl;
        cin>>action;
        switch (action) {
            case 1:
                this->attack_ing(target);
                break;
            default:
                break;
        }
    }

    void die(){
        cout << "GG "<< this->getName()<< " ez tutorial" <<endl;
        this->dead= true;
    }
};

#endif //RPG_GAME_CHARACTER_H
