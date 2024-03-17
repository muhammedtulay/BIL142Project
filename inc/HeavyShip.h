//
// Created by mtula on 02/22/2024.
//

#ifndef BIL142PROJECT_HEAVYSHIP_H
#define BIL142PROJECT_HEAVYSHIP_H
#include "SpaceShip.h"

class HeavyShip : public SpaceShip{
public:
    HeavyShip()=default;
    void takeDamage(int) override;
    [[nodiscard]] double getDodgeChance()const override;
};


#endif //BIL142PROJECT_HEAVYSHIP_H
