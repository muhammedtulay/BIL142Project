//
// Created by mtula on 02/20/2024.
//

#ifndef BIL142PROJECT_GAMEMANAGER_H
#define BIL142PROJECT_GAMEMANAGER_H

#include "eventManager.h"
#include "SpaceShip.h"
#include <iostream>

class gameManager{
public:
    void startGame();
private:
    eventManager EventManager;
    static constexpr int FuelConsumptionPerEvent{10};
    void endGame() const;
    void shipSelection();
};


#endif //BIL142PROJECT_GAMEMANAGER_H
