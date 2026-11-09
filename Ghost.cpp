//
// Created by Polina Stupak on 09.11.2026.
//

#include "Ghost.h"

#include <iostream>
Ghost::Ghost(std::string name, int hp) : Enemy(name, hp) {};
void Ghost::takeHit(int damage) {
    int real_damage = damage / 2;
    hp = std::max(0, hp - real_damage);
    std::cout << name << ": -" << real_damage << "hp ->" << hp << std::endl;
}
