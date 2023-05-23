#include <iostream>
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Player player;
    Monster monster;
    int turn = 1;
    
    cout << "Player Is Ready To Fight" << endl;
    cout << "Name: Deder" << endl;
    cout << "Health: " << player.getHealth() << endl;
    cout << "Atack Power: " << player.getAttackPower() << endl;
    cout << "Defense: " << player.getDefense() << endl << endl;

    cout << "Monster Is Ready To Fight" << endl;
    cout << "Name: Troll" << endl;
    cout << "Health: " << monster.getHealth() << endl;
    cout << "Atack Power: " << monster.getAttackPower() << endl;
    cout << "Defense: " << monster.getDefense() << endl << endl;

    while (player.getHealth() > 0 && monster.getHealth() > 0)
    {
        cout << endl << "Turn " << turn << " started!" << endl;
        turn++;
        cout << "--------------------------------------------------------------------------------------" << endl;

        monster.takeDamage(player.damage(monster.getDefense()));
        cout << "Player is attacking to monster" << endl;;
        cout << "Player damage: " << player.damage(monster.getDefense()) << endl;
        cout << "Monster Remaining Health: " << monster.getHealth() << endl << endl;

        if (monster.getHealth() <= 0)
        {
            break;
        }
        
        player.takeDamage(monster.damage(player.getDefense()));;
        cout << "Monster is attacking to monster" << endl;;
        cout << "Monster damage: " << monster.damage(player.getDefense()) << endl;
        cout << "Player Remaining Health: " << player.getHealth() << endl << endl;


        if (monster.getHealth() <= 0)
        {
            break;
        }

    }

    if (monster.getHealth() <= 0) {
        cout << endl << "Player Won" << endl;
    }
    else
    {
        cout << "Monster Won" << endl;
    }

    cout << endl << "Baris Nisanci 20070001019" << endl;

}
