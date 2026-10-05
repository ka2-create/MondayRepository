#pragma once
#include <random>
#include <ctime>

class Character 
{
protected:
    int hp;
    int attack;
    int defense;
    int evade;

public:
    Character();
    virtual ~Character() {}

    int getHP() const;
    int getAttack() const;
    int getDefense() const;
    int getEvade() const;

    bool isDead() const;

    void heal(int amount);
    void takeDamage(int damage);

    int attackTo(Character& target);
};
