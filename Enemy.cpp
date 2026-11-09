//
// Created by Polina Stupak on 09.11.2026.
//

#include "Enemy.h"
Enemy::Enemy(std::string name, int hp) : name(name), hp(hp) {}
std::string Enemy::getName() {
    return name;
}

bool Enemy::isAlive() {
    return hp > 0;
}