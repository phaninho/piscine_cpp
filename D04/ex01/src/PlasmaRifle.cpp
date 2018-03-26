#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 21, 5)
{
  return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
  *this = src;
  return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
  return ;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
  if (this != &rhs)
  {
    this->setname(rhs.getname());
    this->setAPcost(rhs.getAPcost());
    this->setDamage(getDamage());
  }
  return (*this);
}

void PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
  return ;
}
