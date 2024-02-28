#include "Character.h"

Character Character::choseTarget(std::vector<Character> targets) {
    cout << "Chose your target :" << endl;
    for (int i = 0; i < targets.size(); ++i) {
        cout << i << ") " << targets[i].getName();
    }
    int characterIndex = 0;
    cin >> characterIndex;
    return targets[characterIndex];
}
void Character::attack_ing(Character target) {
    cout << this->getName() << " stabs " << target.getName() << endl;
    (this->getAttack()) < (target.getDefense()) ? target.setDamage(0) : target.setDamage(
            getAttack() - target.getDefense());
}
void Character::takeTurn() {
    CombatSystem *combatSystem= new CombatSystem();
    int action;
    cout << "Chose your action " << this->getName() << " \n 1)Attack\n2)Fleed" << endl;
    cin >> action;
    Character target= this->choseTarget(combatSystem->characters);
    switch (action) {
        case 1:
            break;
            this->attack_ing(target);

        case 2:
            cout<<"Huiste :)"<<endl;
            break;
        default:
            break;
    }
    delete combatSystem;
}
void Character::die() {
    cout << "GG " << this->getName() << " ez tutorial" << endl;
    this->dead = true;
}