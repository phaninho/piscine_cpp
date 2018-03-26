#include "RadScorpion.hpp"

RadScorpion::RadScorpion(RadScorpion const & src)
{
  *this = src;
  return ;
}

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
  return ;
}

RadScorpion::~RadScorpion(void)
{
  std::cout << "* SPROTCH *" << std::endl;
  return ;
}

void RadScorpion::takeDamage(int damage)
{
  int hp = this->getHP();

  if (hp < 0 || damage - 3 <= 0)
    return ;
  else if (hp - (damage - 3) < 0)
    this->sethp(0);
  else
    this->sethp(hp - (damage - 3));
  return ;
}
