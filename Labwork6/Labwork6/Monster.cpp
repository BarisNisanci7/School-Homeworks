#include <iostream>
#include "Monster.h"
using namespace std;


int Monster::getHealth() {
    if (health < 0) {
        return 0;
    }
    else {
        return health;
    }
}

int Monster::getAttackPower() {
    return attackPower;
}

int Monster::getDefense() {
    return defense;
}

int Monster::damage(int defense) {
    if (attackPower - defense <= 0) {
        return 1;
    }
    else {
        return attackPower - defense;
    }
}


void Monster::takeDamage(int damage) {
    if (damage <= 0) {
        health--;
    }
    else {
        health -= damage;
    }
}