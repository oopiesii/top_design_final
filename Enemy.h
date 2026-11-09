//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_ENEMY_H
#define OOP_DESIGN_FINAL_ENEMY_H
#include <string>



class Enemy {
    public:
        Enemy(std::string name, int hp);
        std::string getName();
        bool isAlive();
        virtual void takeHit(int damage) = 0;
        virtual ~Enemy() = default;
    protected:
        std::string name;
        int hp;
};


#endif //OOP_DESIGN_FINAL_ENEMY_H
