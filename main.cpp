#include <iostream>
#include "Character.h"
#include "System.h"

int main() {
    System *combat = new System();
    Character *character = new Character("Ian", 100, 20, 10);
    Character *character1 = new Character("Angel", 90, 30, 100);

    cout<<combat->presentation(*character,*character1)<<endl;
    combat->startCombat(*character,*character1);

    delete character;
    delete character1;
    return 0;
}
