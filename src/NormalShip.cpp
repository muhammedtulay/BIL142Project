//
// Created by mtula on 02/22/2024.
//

#include "NormalShip.h"
#include <iostream>
double NormalShip::getDodgeChance()const {
    return 1;
}
void NormalShip::takeDamage(int value) {
    health = health-value*1;
    std::cout<<"You lost "<<value*1 <<" health.\n";
}