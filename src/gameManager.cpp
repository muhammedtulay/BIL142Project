//
// Created by mtula on 02/20/2024.
//

#include "gameManager.h"
#include "eventManager.h"
#include "LightShip.h"
#include "NormalShip.h"
#include "HeavyShip.h"
void gameManager::startGame() {
    shipSelection();
    for (int i = 0; i < 5; ++i) {
        EventManager.ship->consumeFuel(FuelConsumptionPerEvent);
        EventManager.randomEvent();
        if(EventManager.ship->isFuelEmpty()){
            std::cout<<"You are out of fuel.\n";
            endGame();
            break;
        }
        if(EventManager.ship->getHealth()<=0){
            std::cout<<"Your ship is destroyed.\n";
            endGame();
        }
    }
    endGame();
}
void gameManager::endGame() const{
    std::cout << "Game Over\nYour score is:"<< EventManager.ship->calculatePoints()<<"\n";
}

void gameManager::shipSelection() {std::string shipSelection;
    while (true) {
        std::cout << "Select your spaceship.\n1-Light\n2-Normal\n3-Heavy\n";
        std::cin >> shipSelection;
        if (shipSelection == "Light") {
            EventManager.ship = std::make_unique<LightShip>();
            break;
        } else if (shipSelection == "Normal") {
            EventManager.ship = std::make_unique<NormalShip>();
            break;
        } else if (shipSelection == "Heavy") {
            EventManager.ship = std::make_unique<HeavyShip>();
            break;
        } else {
            std::cout << "Invalid ship type.\n";
        }
    }
}
//