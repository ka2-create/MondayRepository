#include "Character.h"

const int MAX_HP = 100;
const int MIN_STATUS = 1;
const int MAX_STATUS = 20;
const int MIN_ATTACK_RAND = 1;
const int MAX_ATTACK_RAND = 12;

int getRandomInt(int minVal, int maxVal) 
{
    static std::mt19937 mt(static_cast<unsigned int>(time(nullptr)));
    std::uniform_int_distribution<int> dist(minVal, maxVal);
    return dist(mt);
}

Character::Character()
    : hp(MAX_HP),
    attack(getRandomInt(MIN_STATUS, MAX_STATUS)),
    defense(getRandomInt(MIN_STATUS, MAX_STATUS)),
    evade(getRandomInt(MIN_STATUS, MAX_STATUS)) {
}

int Character::getHP() const { return hp; }
int Character::getAttack() const { return attack; }
int Character::getDefense() const { return defense; }
int Character::getEvade() const { return evade; }

bool Character::isDead() const { return hp <= 0; }

void Character::heal(int amount) 
{
    hp += amount;
    if (hp > MAX_HP) hp = MAX_HP;
}

void Character::takeDamage(int damage)
{
    if (damage < 0) damage = 0;
    hp -= damage;
    if (hp < 0) hp = 0;
}

int Character::attackTo(Character& target)
{
    int randVal = getRandomInt(MIN_ATTACK_RAND, MAX_ATTACK_RAND);

    if (randVal <= target.getEvade()) 
    {
        return 0;
    }

    int damage = attack + randVal - target.getDefense();
    if (damage < 0) damage = 0;

    target.takeDamage(damage);
    return damage;
}
