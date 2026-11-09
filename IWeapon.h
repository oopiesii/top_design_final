//
// Created by Polina Stupak on 09.11.2026.
//

#ifndef OOP_DESIGN_FINAL_IWEAPON_H
#define OOP_DESIGN_FINAL_IWEAPON_H


class IWeapon {
    public:
        virtual int damage() = 0;
        virtual ~IWeapon() = 0;
};


#endif //OOP_DESIGN_FINAL_IWEAPON_H
