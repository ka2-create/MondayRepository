#include <iostream>
#include "Player.h"
#include "Enemy.h"

int getRandomInt(int minVal, int maxVal);
using namespace std;

int main() 
{
    Player player;
    Enemy enemy;

    std::cout << "=== Battle Start ===" << std::endl;
    player.showStatus();
    enemy.showStatus();
    std::cout << std::endl;

    while (!player.isDead() && !enemy.isDead()) 
    {

        std::cout << "---- Player's Turn ----" << std::endl;
        int choice;
        std::cout << "Choose action (1: Attack  2: Heal): ";
        std::cin >> choice;

        if (choice == 1) 
        {
            int beforeHP = enemy.getHP();
            int damage = player.attackTo(enemy);

            if (damage > 0)
            {
                cout << "Player attack: " << damage << " damage" << endl;
            }
            else 
            {
                cout << "Player's attack was evaded" << endl;

                cout << "Enemy HP: " << beforeHP << " -> " << enemy.getHP() << endl;
            }
        }
        else if (choice == 2) 
        {
            int healVal = getRandomInt(1, 12);
            int beforeHP = player.getHP();
            player.heal(healVal);

            std::cout << "Player healed: " << healVal << std::endl;
            std::cout << "Player HP: " << beforeHP << " -> " << player.getHP() << std::endl;

        }
        else 
        {
           cout << "Invalid input." << endl;
        }

        if (enemy.isDead()) 
        {
            std::cout << "\nEnemy defeated! Player wins!" << std::endl;

            break;
        }

        std::cout << std::endl;

        std::cout << "---- Enemy's Turn ----" << std::endl;
        int enemyChoice = getRandomInt(1, 2);

        if (enemyChoice == 1)
        {
            int beforeHP = player.getHP();
            int damage = enemy.attackTo(player);

            if (damage > 0)
            {
                cout << "Enemy attack: " << damage << " damage!" << endl;
            }
            else
            {
                cout << "Enemy attack was evaded" << endl;

                cout << "Player HP: " << beforeHP << " -> " << player.getHP() << endl;
            }
        }
        else 
        {
            int healVal = getRandomInt(1, 12);
            int beforeHP = enemy.getHP();
            enemy.heal(healVal);

            cout << "Enemy healed: " << healVal << endl;
            cout << "Enemy HP: " << beforeHP << " -> " << enemy.getHP() << endl;
        }

        if (player.isDead())
        {
            std::cout << "\n Enemy wins" << std::endl;
            break;
        }

        std::cout << std::endl;
    }

    std::cout << "\n=== Battle End ===" << std::endl;
    return 0;
}
