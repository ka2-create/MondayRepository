#include "Enemy.h"
#include <iostream>

Enemy::Enemy() : Character() {}

void Enemy::showStatus() const {
    std::cout << "【敵】        HP: " << hp
        << " / 攻撃力: " << attack
        << " / 防御力: " << defense
        << " / 回避力: " << evade << std::endl;
}
