#pragma once
#include <iostream>

struct Player
{

  class Profesja
  {
  public:
    virtual void useUlt() = 0;
  };

  class Paladin :public Profesja
  {
    void useUlt() override;
    //heal
  };

  class Mage :public Profesja
  {
    void useUlt() override;
    //zdawianie dmg - fireball
  };

  class Rogue :public Profesja
  {
    void useUlt() override;
    //zabiera karte z enemy handdeck
  };
  //HP _HP;
  //MP _MP;

};
