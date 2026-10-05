#include "Player.h"
#include <iostream>

Player::Player() : Character() {}

void Player::showStatus() const 
{
    std::cout << "【プレイヤー】 HP: " << hp
        << " / 攻撃力: " << attack
        << " / 防御力: " << defense
        << " / 回避力: " << evade << std::endl;
}
