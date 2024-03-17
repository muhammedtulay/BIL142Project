//
// Created by mtula on 02/22/2024.
//

#ifndef BIL142PROJECT_NORMALSHIP_H
#define BIL142PROJECT_NORMALSHIP_H
#include "SpaceShip.h"
class NormalShip : public SpaceShip{
public:
    NormalShip()=default;
    void takeDamage(int) override;
    [[nodiscard]] double getDodgeChance() const override;
};


#endif //BIL142PROJECT_NORMALSHIP_H
