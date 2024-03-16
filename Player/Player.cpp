//
// Created by Ian on 3/15/2024.
//

#include "Player.h"

float Player::getExp(){
    return exp;
}

void Player::setExp(float exp) {
    Player::exp = exp;
}

int Player::getLevel(){
    return level;
}

void Player::setLevel(int level) {
    Player::level = level;
}

const Class &Player::getClassType(){
    return classType;
}

void Player::setClassType(Class &classType) {
    Player::classType = classType;
}

void Player::setAttack(int _attack) {
//todo
}

void Player::setHealth(int _health) {
//todo
}

void Player::setDefense(int _defense) {
//todo
}
