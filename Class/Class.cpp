//
// Created by Ian on 3/15/2024.
//

#include "Class.h"

const string &Class::getName() const {
    return name;
}

void Class::setName(const string &name) {
    Class::name = name;
}

const Wepons &Class::getWepon() const {
    return wepon;
}

void Class::setWepon(const Wepons &wepon) {
    Class::wepon = wepon;
}
