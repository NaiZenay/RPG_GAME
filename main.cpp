#include <iostream>
#include "Character.h"
#include "CombatSystem.h"

int main() {
    CombatSystem *combat = new CombatSystem();
    combat->menu();
    delete combat;
    return 0;
}
