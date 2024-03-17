//
// Created by mtula on 02/20/2024.
//

#include "eventManager.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#define ASTEROID_BELT_HIT_PROBABILITY 50
#define SPACE_PIRATES_FLEE_CHANCE 50
#define SPACE_PIRATES_FIGHT_WIN_CHANCE 50

void eventManager::randomEvent() {

    switch (rand()%3) {
        case 0:
            AsteroidBelt();
            break;
        case 1:
            AbandonedPlanet();
            break;
        case 2:
            SpacePirates();
            break;

    }
}
void eventManager::AsteroidBelt() {
    std::cout<<"You found yourself in a asteroid belt. There are 3 asteroids coming towards you.\n";
    for (int i = 0; i < 3; ++i) {
        if(ship->getDodgeChance()*(rand()%100) > ASTEROID_BELT_HIT_PROBABILITY){
            std::cout<<"An asteroid hit you. ";
            ship->takeDamage(10);
        }
        else{
            std::cout<<"You dodged an asteroid.\n";
        }
    }
}

void eventManager::AbandonedPlanet() {
    std::cout<<"You found an abandoned planet.\n";
    if(rand()%100 > 50){
        std::cout<<"You found something on the planet.\n";
        ship->earnMoney(10);
    }else{
        std::cout<<"You engaged with space pirates on the planet.\n";
        SpacePiratesSelection();
    }

}

void eventManager::SpacePirates() {
    std::cout<<"You engaged with space pirates.\n";
    SpacePiratesSelection();
}
void eventManager::SpacePiratesSelection(){
    int selection;
    std::cout<<"You have 3 options\n1-Flee\n2-Fight\n3-Pay\n";
    std::cin >> selection;
    switch (selection) {
        case 1:
            if(ship->getFuel()>33) {
                ship->consumeFuel(33);
                SpacePiratesFlee();
            }
            else{
                std::cout<<"You have not enough fuel to flee!\n";
                SpacePiratesFight();
            }
            break;
        case 2:
            SpacePiratesFight();
            break;
        case 3:
            SpacePiratesPay();
            break;
        default:
            break;
    }
}

void eventManager::SpacePiratesFlee() {
    if(ship->getDodgeChance()*(rand()%100)>SPACE_PIRATES_FLEE_CHANCE){
        std::cout<<"You fled successfully.\n";
    }
    else{
        std::cout<<"You failed to flee.\n";
        SpacePiratesFight();
    }
}

void eventManager::SpacePiratesFight() {
    if(rand()%100<SPACE_PIRATES_FIGHT_WIN_CHANCE){
        std::cout<<"You lost the fight with pirates.\n";
        ship->takeDamage(30);
    }
    else{
        std::cout<<"You won the fight with pirates.\n";
    }
}

void eventManager::SpacePiratesPay() {
    int price=10+10*(rand()%3);
    std::cout<<"Pirates wants "<<price<<" money to let you go.\n";
    if(ship->getMoney()>price){
        ship->payMoney(price);
    }
    else{
        std::cout<<"You don't have enough money to pay pirates. Pirates attack while you think.\n";
        SpacePiratesFight();
    }
}

