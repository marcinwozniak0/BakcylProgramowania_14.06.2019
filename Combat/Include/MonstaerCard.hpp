#pragma once
#include <iostream>

class MonsterCard : public Card
{
    private:
        int hp;
        int strength;
    public:
        MonsterCard(int = 20,int = 10);
        std::string useCard() override;
        int takeDamage(int damagePoints);
};
