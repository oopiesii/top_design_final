//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_CANNON_H
#define OOP_DESIGN_FINAL_CANNON_H
#include "IWeapon.h"


class Cannon: public IWeapon{
    public:
        Cannon(int power);
        int damage() override;
    private:
        int power;
};


#endif //OOP_DESIGN_FINAL_CANNON_H
