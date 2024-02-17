
//
// Created by Ian on 2/15/2024.
//

#ifndef RPG_GAME_SYSTEM_H
#define RPG_GAME_SYSTEM_H

#include "Character.h"

class System {
public:

    string presentation(Character character, Character character1) {

        string presentation = "Player:" + character.getName() + "        " + "Player:" + character1.getName() + "\n" +
                              "Health:" + std::to_string(character.getHealth()) + "   VS   " + "Health:" +
                              std::to_string(character.getHealth()) + "\n"
                              + "Atk:---" + std::to_string(character.getAttack()) + "         " + "Atk:---" +
                              std::to_string(character.getAttack()) + "\n"
                              + "Armor:-" + std::to_string(character.getAttack()) + "         " + "Armor:-" +
                              std::to_string(character.getAttack()) + "\n";

        return presentation;
    }

    bool checkCombatStatus(Character character) {
        bool gameOver = false;
        if (character.dead) {
            cout << "Duel to the death with knives END" << endl;
            gameOver = true;
        }
        return gameOver;
    }

    void startCombat(Character character, Character character1) {
        int roundCount = 0;
        bool gameOver = false;
        cout << "Duel to the death with knives START" << endl;

        while (!gameOver) {
            //recibe daño el personaje 1
            character.takeTurn(&character1);

            //esta muerto?
            gameOver = this->checkCombatStatus(character1);

            if (gameOver) {
                break;
            }
            //recibe daño el personaje
            character1.takeTurn(&character);

            //esta muerto x2?
            gameOver = this->checkCombatStatus(character);
            roundCount++;
        }
        cout << "Duel to the dead with knives ended in " << std::to_string(roundCount) << " rounds" << endl;
    }


};


#endif //RPG_GAME_SYSTEM_H
