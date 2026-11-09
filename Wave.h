//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_WAVE_H
#define OOP_DESIGN_FINAL_WAVE_H
#include <string>
#include <vector>

#include "Enemy.h"


class Wave {
    public:
        void addOrc(std::string name, int hp);
        void addGhost(std::string name, int hp);
        void hitAll(int damage);
        int aliveCount();
    private:
        std::vector<std::unique_ptr<Enemy>> enemies;
};


#endif //OOP_DESIGN_FINAL_WAVE_H
