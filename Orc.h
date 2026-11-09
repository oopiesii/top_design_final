//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_ORC_H
#define OOP_DESIGN_FINAL_ORC_H
#include "Enemy.h"


class Orc: public Enemy{
    public:
        Orc(std::string name, int hp);
        void takeHit(int damage) override;
    private:
        int armor = 2;
};


#endif //OOP_DESIGN_FINAL_ORC_H
