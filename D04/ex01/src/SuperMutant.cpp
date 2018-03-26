#include "SuperMutant.hpp"

SuperMutant::SuperMutant(SuperMutant const & src)
{
  *this = src;
  return ;
}

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
  return ;
}

SuperMutant::~SuperMutant(void)
{
  std::cout << "Aaargh ..." << std::endl;
  return ;
}

void SuperMutant::takeDamage(int damage)
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
