
//
// Created by Ian on 2/15/2024.
//

#ifndef RPG_GAME_COMBATSYSTEM_H
#define RPG_GAME_COMBATSYSTEM_H

#include "Character.h"
#include <vector>

class CombatSystem {
public:
    ~CombatSystem() = default;

    vector <Character> characters;

    void addCharacter() {
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

        characters.push_back(*character);
    }

    void getCharacters() {
        for (auto Character: characters) {
            cout << Character.toString() << endl;
            cout << "===============" << endl;
        }
    }

    bool checkCombatStatus(Character character) {
        bool gameOver = false;
        if (character.dead) {
            cout << "Duel to the death with knives END" << endl;
            gameOver = true;
        }
        return gameOver;
    }

    void startCombat(vector <Character>) {
    //TODO
    }

    void menu() {
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
//                this->startCombat();
                break;
            default:
                break;
        }

    }


};


#endif //RPG_GAME_COMBATSYSTEM_H
