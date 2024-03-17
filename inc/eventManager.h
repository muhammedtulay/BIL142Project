//
// Created by mtula on 02/20/2024.
//

#ifndef BIL142PROJECT_EVENTMANAGER_H
#define BIL142PROJECT_EVENTMANAGER_H

#include "SpaceShip.h"
#include <memory>

class eventManager {
public:
    std::unique_ptr<SpaceShip> ship;
    eventManager()=default;
    ~eventManager()=default;
    void randomEvent();
private:
    static constexpr int asteroidBeltHitProbability{50};
    static constexpr int spacePiratesFleeChance{50};
    static constexpr int spacePiratesFightWinChance{50};
    void AsteroidBelt();
    void AbandonedPlanet();
    void SpacePirates();
    void SpacePiratesSelection();
    void SpacePiratesFlee();
    void SpacePiratesFight();
    void SpacePiratesPay();
};


#endif //BIL142PROJECT_EVENTMANAGER_H
