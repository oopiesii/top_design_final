//
// Created by Polina Stupak on 09.11.2026.
//

#include "Orc.h"

#include <iostream>
Orc::Orc(std::string name, int hp) : Enemy(name, hp) {};
void Orc::takeHit(int damage) {
    int real_damage = std::max(0, damage-armor);
    hp = std::max(0,hp - real_damage);
    std::cout << name << ": -" << real_damage << "hp ->" << hp << std::endl;
}
