//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_GHOST_H
#define OOP_DESIGN_FINAL_GHOST_H
#include "Enemy.h"


class Ghost: public Enemy {
    public:
        Ghost(std::string name, int hp);
        void takeHit(int damage) override;
};


#endif //OOP_DESIGN_FINAL_GHOST_H
