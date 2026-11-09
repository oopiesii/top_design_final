//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_TOWER_H
#define OOP_DESIGN_FINAL_TOWER_H
#include <string>

#include "Cannon.h"
#include "IWeapon.h"
#include "Wave.h"


class Tower {
    public:
        Tower(std::string name, IWeapon& weapon, Wave& target);
        void fire();
    private:
        std::string name;
        IWeapon& weapon;
        Wave& target;
};


#endif //OOP_DESIGN_FINAL_TOWER_H
