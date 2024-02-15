#include <iostream>
#include "Character.h"

int main() {
    Character *character = new Character("Ian", 100, 20, 10, 0);
    Character *character1 = new Character("Nai", 90, 30, 5, 0);


    cout << "Duel to the death with knives START" << endl;

    do {

        character1->setDamage(character->attack_ing(character1));
        character->setDamage(character1->attack_ing(character));

    } while ();


    return 0;
}
