//
// Created by mtula on 02/17/2024.
//

#ifndef BIL142PROJECT_SPACESHIP_H
#define BIL142PROJECT_SPACESHIP_H

class SpaceShip {
public:
    [[nodiscard]] virtual bool isFuelEmpty()const;
    [[nodiscard]] virtual int getFuel()const;
    [[nodiscard]] virtual int getHealth()const;
    [[nodiscard]] virtual int getMoney()const;
    virtual int calculatePoints();
    virtual void takeDamage(int)=0;
    [[nodiscard]] virtual double getDodgeChance() const=0;
    virtual void consumeFuel(int);
    virtual void earnMoney(int);
    virtual void payMoney(int);
private:
protected:
    int fuel{100};
    int health{100};
    int money{0};
    //double damageMultiplier;
    //double dodgeChance;
};







#endif //BIL142PROJECT_SPACESHIP_H
