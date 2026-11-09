#include <iostream>

#include "Cannon.h"
#include "Tower.h"
#include "Wave.h"

int main() {
    Wave wave;
    wave.addOrc("Grunt", 8);
    wave.addGhost("Shade", 4);

    Cannon cannon(5);

    Tower east("East", cannon, wave);
    Tower west("West", cannon, wave);

    east.fire();
    west.fire();
    east.fire();
    return 0;
}