//
// Created by mtula on 02/22/2024.
//

#ifndef BIL142PROJECT_LIGHTSHIP_H
#define BIL142PROJECT_LIGHTSHIP_H
#include "SpaceShip.h"

class LightShip : public SpaceShip{
public:
    LightShip()=default;
    void takeDamage(int) override;
    [[nodiscard]] double getDodgeChance()const override;
};


#endif //BIL142PROJECT_LIGHTSHIP_H
