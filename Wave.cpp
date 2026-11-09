//
// Created by Polina Stupak on 09.11.2026.
//

#include "Wave.h"

#include <iostream>
#include <ostream>

#include "Ghost.h"
#include "Orc.h"

void Wave::addGhost(std::string name, int hp) {
    enemies.push_back(make_unique<Ghost>(name, hp));
}
void Wave::addOrc(std::string name, int hp) {
    enemies.push_back(make_unique<Orc>(name, hp));
}
void Wave::hitAll(int damage) {
    for (const auto& e : enemies) {
        if (e->isAlive()) {
            e->takeHit(damage);
        }
        else {
            std::cout << e->getName() << ": dead, skipped" << std::endl;
        }
    }
}

int Wave::aliveCount() {
    int count = 0;
    for (const auto& e : enemies) {
        if (e->isAlive()) {
            count++;
        }
    }
    return count;
}

