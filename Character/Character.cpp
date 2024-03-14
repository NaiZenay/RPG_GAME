#include "Character.h"

void Character::attack_ing(Character target) {
    cout << this->getName() << " stabs " << target.getName() << endl;
    (this->getAttack()) < (target.getDefense()) ? target.setDamage(0) : target.setDamage(
            getAttack() - target.getDefense());
}



void Character::die() {
    cout << "GG " << this->getName() << " ez tutorial" << endl;
    this->dead = true;
}