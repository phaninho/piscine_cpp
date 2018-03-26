#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
  this->setname("No name");
  this->setDamage(0);
  this->setAPcost(0);
  return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name),
                                                                    _apcost(apcost),
                                                                    _damage(damage)
{
  return ;
}

AWeapon::AWeapon(AWeapon const & src)
{
  *this = src;
  return ;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
  if (this != &rhs)
  {
    this->setname(rhs.getname());
    this->setDamage(rhs.getDamage());
    this->setAPcost(rhs.getAPcost());
  }
  return (*this);
}

AWeapon::~AWeapon(void)
{
  return ;
}

std::string const AWeapon::getname() const
{
  return (this->_name);
}

int AWeapon::getAPcost() const
{
  return (this->_apcost);
}

int AWeapon::getDamage() const
{
  return (this->_damage);
}

void AWeapon::setname(std::string name)
{
  this->_name = name;
  return ;
}

void AWeapon::setAPcost(int APcost)
{
  this->_apcost = APcost;
  return ;
}

void AWeapon::setDamage(int damage)
{
  this->_damage = damage;
  return ;
}
