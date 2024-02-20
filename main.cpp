#include <iostream>
#include "Character.h"
#include "CombatSystem.h"

int main() {
    CombatSystem *combat = new CombatSystem();
    Character *character = new Character("Ian", 100, 20, 10);
    Character *character1 = new Character("Angel", 90, 30, 100);
    Character *character2 =new Character();

    combat->addCharacter(*character2);
    combat->getCharacters();


    cout<<combat->presentation(*character,*character1)<<endl;
    combat->startCombat(*character,*character1);

    delete character;
    delete character1;
    delete combat;
    return 0;
}
