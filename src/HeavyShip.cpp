//
// Created by mtula on 02/22/2024.
//

#include "HeavyShip.h"
#include <iostream>
void HeavyShip::takeDamage(int value) {
    health = health-value*0.5;
    std::cout<<"You lost "<<value*0.5 <<" health.\n";
}
double HeavyShip::getDodgeChance() const{
    return 1 / 3.0;
}