#include <iostream>
#include "Player.h"
using namespace std;

int Player::getHealth() {
    if (health < 0) {
        return 0;
    }
    else {
        return health;
    }
}

int Player::getAttackPower() {
    return attackPower;
}

int Player::getDefense() {
    return defense;
}

int Player::damage(int defense) {
    if (attackPower - defense <= 0) {
        return 1;
    }
    else {
        return attackPower - defense;
    }
}

void Player::takeDamage(int damage) {
    if (damage <= 0) {
        health--;
    }
    else {
        health -= damage;
    }
}

