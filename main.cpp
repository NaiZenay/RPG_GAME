#include <iostream>
#include "Character/Character.h"
#include "CombatSystem/CombatSystem.h"

int main() {
    auto *combat = new CombatSystem();
    combat->menu();
    delete combat;
    return 0;
}
