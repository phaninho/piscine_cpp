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

AWeapon &operator=(AWeapon const &rhs)
{
  if (*this != rhs)
  {
    this->setname(rhs.getname());
    this->setDamage(rhs.getDamage());
    this->setAPcost(rh.getAPcost());
  }
  return (this);
}

AWeapon::~AWeapon(void)
{
  return ;
}

std::string getname() const
{
  return (this->_name);
}

int getAPcost() const
{
  return (this->_apcost);
}

int getDamage() const
{
  return (this->_damage);
}

void setname(std::string name)
{
  this->_name = name;
  return ;
}

void setAPcost(int APcost)
{
  this->_apcost = APcost;
  return ;
}

void setDamage(int damage)
{
  this->_damage = damage;
  return ;
}
