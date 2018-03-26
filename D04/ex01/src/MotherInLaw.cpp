#include "MotherInLaw.hpp"

MotherInLaw::MotherInLaw(MotherInLaw const & src)
{
  *this = src;
  return ;
}

MotherInLaw::MotherInLaw(void): Enemy(200, "MotherInLaw")
{
  std::cout << "* I love my daughter ex boyfriend *" << std::endl;
  return ;
}

MotherInLaw::~MotherInLaw(void)
{
  std::cout << "* You will never be good enough to my daughter. *" << std::endl;
  return ;
}

void MotherInLaw::takeDamage(int damage)
{
  int hp = this->getHP();

  if (hp < 0 || damage - 1 <= 0)
    return ;
  else if (hp - (damage - 1) < 0)
    this->sethp(0);
  else
    this->sethp(hp - (damage - 1));
  return ;
}
