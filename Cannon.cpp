//
// Created by Polina Stupak on 09.11.2026.
//

#include "Cannon.h"
Cannon::Cannon(int power): power(power){};
int Cannon::damage() {
    return power;
}