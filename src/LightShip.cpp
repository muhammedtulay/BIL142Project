//
// Created by mtula on 02/22/2024.
//
#include <iostream>
#include "LightShip.h"

void LightShip::takeDamage(int value) {
    health = health-value*1.5;
    std::cout<<"You lost "<<value*1.5 <<" health.\n";
}
double LightShip::getDodgeChance() const{
    return 1.5;
}