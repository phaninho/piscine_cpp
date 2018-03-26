#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
  return ;
}

PowerFist::PowerFist(PowerFist const & src)
{
  *this = src;
  return ;
}

PowerFist::~PowerFist(void)
{
  return ;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs)
{
  if (this != &rhs)
  {
    this->setname(rhs.getname());
    this->setAPcost(rhs.getAPcost());
    this->setDamage(getDamage());
  }
  return (*this);
}

void PowerFist::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
  return ;
}
