#include "ToothBrush.hpp"

ToothBrush::ToothBrush(void): AWeapon("ToothBrush", 3, 10)
{
  return ;
}

ToothBrush::ToothBrush(ToothBrush const & src)
{
  *this = src;
  return ;
}

ToothBrush::~ToothBrush(void)
{
  return ;
}

ToothBrush &ToothBrush::operator=(ToothBrush const &rhs)
{
  if (this != &rhs)
  {
    this->setname(rhs.getname());
    this->setAPcost(rhs.getAPcost());
    this->setDamage(getDamage());
  }
  return (*this);
}

void ToothBrush::attack() const
{
  std::cout << "* scrub scrub scrub *" << std::endl;
  return ;
}
