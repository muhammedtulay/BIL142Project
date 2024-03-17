//
// Created by mtula on 02/17/2024.
//

#include "../inc/SpaceShip.h"
#include <iostream>
#include <cmath>

bool SpaceShip::isFuelEmpty() const{
    if(fuel<=0){
        return true;
    }else{
        return false;
    }
}

int SpaceShip::calculatePoints() {
    return 5*fuel + 10*health + 10*money;
}




void SpaceShip::consumeFuel(int consumption) {
    fuel=fuel-consumption;
    std::cout<< consumption <<" fuel consumed.\n";
}


void SpaceShip::earnMoney(int _money) {
    money+=_money;
    std::cout << _money << " money earned.\n";
}
void SpaceShip::payMoney(int _money) {
    money-=_money;
    std::cout<<_money<<" money payed.\n";
}


int SpaceShip::getFuel() const{
    return fuel;
}

int SpaceShip::getHealth() const{
    return health;
}

int SpaceShip::getMoney() const{
    return money;
}
