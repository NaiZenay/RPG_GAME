#include "CombatSystem.h"
#include "algorithm"

using namespace std;
bool compareInitiatives(Character &a, Character &b) {
    return a.getInitiative() > b.getInitiative();
}
Character CombatSystem::choseTarget(std::vector<Character> targets) {
    cout << "Chose your target :\n" << endl;
    for (int i = 0; i < targets.size(); ++i) {
        cout << i << ") " << targets[i].getName()<<endl;
        cout<<"========================"<<endl;
    }
    int characterIndex = 0;
    cin >> characterIndex;
    return targets[characterIndex];
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
    this->printCharacters();
}

void CombatSystem::printCharacters() {
    for (auto Character: characters) {
        cout << Character.toString() << endl;
        cout << "===============" << endl;
    }
}

void CombatSystem::startCombat(vector<Character>) {
    setTurns();
    for (auto Character: characters) {
        this->takeTurn(Character);
    }
}

bool CombatSystem::checkCombatStatus(vector<Character> participants) {
    //to do
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
            this->printCharacters();
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

void CombatSystem::takeTurn(Character character) {
    int action;
    cout << "Chose your action " << character.getName() << " \n 1)Attack\n2)Flee" << endl;
    cin >> action;
    switch (action) {
        case 1: {
            Character target = this->choseTarget(characters);
            character.attack_ing(target);
            break;
        }
        case 2:
            cout << "Huiste :)" << endl;
            break;
        default:
            cout << "Huiste :)" << endl;
            break;
    }
}