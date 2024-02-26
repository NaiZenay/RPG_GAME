#include <iostream>
#include "Character.h"
#include "CombatSystem.h"

int main() {
    auto *combat = new CombatSystem();
    combat->menu();
    delete combat;
    return 0;
}
