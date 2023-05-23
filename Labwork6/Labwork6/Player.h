#include <iostream>
using namespace std;

class Player {
private:
    int health;
    int attackPower;
    int defense;
    string name;
public:
    Player() {
        health = rand() % 151 + 100;
        attackPower = rand() % 41 + 10;
        defense = rand() % 21 + 10;
    }

    int getHealth();
    int getAttackPower();
    int getDefense();
    int damage(int defense);
    void takeDamage(int damage);

};
