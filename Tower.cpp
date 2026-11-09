//
// Created by Polina Stupak on 09.11.2026.
//
#include "Tower.h"

#include <iostream>
#include <string>
#include "IWeapon.h"
#include "Wave.h"

Tower::Tower(std::string name, IWeapon& weapon, Wave& target) : name(name), weapon(weapon), target(target) {
}

void Tower::fire() {
    std::cout << name << " fires:" << std::endl;
    int dmg = weapon.damage();
    target.hitAll(dmg);
    int n = target.aliveCount();
    if (n == 0) {
        std::cout <<"wave cleared"<< std::endl;
    }
    if (n > 0) {
        std::cout << "enemies left: " << n << std::endl;
    }
}

