#include "CombatSystem.h"
#include "algorithm"

using namespace std;

bool compareInitiatives(Character &a, Character &b) {
    return a.getInitiative() > b.getInitiative();
}

void CombatSystem::addCharacter() {
    Character *character = new Character();
    cout << "Write the name of your character" << endl;
    string name;
    cin >> name;
    character->setName(name);

    cout << "Write the Health of your character" << endl;
    int health;
    cin >> health;
    character->setHealth(health);

    cout << "Write the Attack of your character" << endl;
    int attack;
    cin >> attack;
    character->setAttack(attack);

    cout << "Write the Defense of your character" << endl;
    int defense;
    cin >> defense;
    character->setDefense(defense);

    character->setInitiative();
    cout << "Your Inititive is:" << character->getInitiative() << endl;

    characters.push_back(*character);
}


void CombatSystem::setTurns() {
    sort(characters.begin(), characters.end(), compareInitiatives);
    this->getCharacters();
}

void CombatSystem::getCharacters() {
    for (auto Character: characters) {
        cout << Character.toString() << endl;
        cout << "===============" << endl;
    }
}

void CombatSystem::startCombat(vector<Character>) {
    setTurns();
}

void CombatSystem::menu() {
    int opcion = 0;
    cout << "Welcome, please chose an action\n"
            "1)Add Caracter\n"
            "2)Show Characters\n"
            "3)Start Combat\n" << endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            this->addCharacter();
            this->menu();
            break;
        case 2:
            this->getCharacters();
            this->menu();
            break;
        case 3:
            this->startCombat(characters);
            this->menu();
            break;
        default:
            break;
    }

}