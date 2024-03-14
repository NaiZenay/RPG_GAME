#include "Character.h"


string Character::getName() {
    return name;
}

void Character::setName(string _name) {
    this->name = _name;
}

int Character::getAttack() {
    return attack;
}

void Character::setAttack(int _attack) {
    this->attack = _attack;
}

int Character::getHealth() {
    return health;
}

void Character::setHealth(int _health) {
    this->health = _health;
}

int Character::getDamage() {
    return damage;
}

void Character::setDamage(int _damage) {
    this->damage += _damage;
    if (damage >= health) {
        this->die();
    } else {
        cout << this->getName() << " take " << _damage << " points of damage, "
             << this->getHealth() - this->getDamage() << " health points left" << endl;
    }
}

int Character::getDefense() {
    return defense;
}

void Character::setDefense(int _defense) {
    this->defense = _defense;
}

int Character::getInitiative() {
    return initiative;
}

void Character::setInitiative() {
    this->initiative = 1 + rand() % (21 - 1);
}

string Character::toString() {
    return "Name: " + name + "\nHealth: " + to_string(health) + "\nAttack: " + to_string(attack) + "\nDefense: " +
           to_string(defense) + "\nInitiative: " + to_string(initiative);
}

void Character::attack_ing(Character target) {
    cout << this->getName() << " stabs " << target.getName() << endl;
    (this->getAttack()) < (target.getDefense()) ? target.setDamage(0) : target.setDamage(
            getAttack() - target.getDefense());
}

void Character::die() {
    cout << "GG " << this->getName() << " ez tutorial" << endl;
    this->dead = true;
}

