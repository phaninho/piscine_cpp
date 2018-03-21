#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
  std::cout << "oyez oyez, aclamez la venue du nouveau ClapTrap" << std::cout;
  return ;
}

ClapTrap::~ClapTrap(void)
{
  std::cout << "ClapTrap est mort, vive ClapTrap" << std::cout;
  return ;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << this->_name << " viens de perdre " << amount - this->_armor_dmg_reduc << " HP" << std::endl;
  this->_sethitpoint(amount - this->_armor_dmg_reduc);
}

void ClapTrap::_sethitpoint(unsigned int amount)
{
  this->_hit_point -= amount;
  if (this->_hit_point < 0)
    this->_hit_point = 0;
  else if (this->_hit_point > this->_max_hit_point)
    this->_hit_point = this->_max_hit_point;
  std::cout << this->_name << " a actuellement " << this->gethitpoint() << " points de vie" << std::endl;
}

void ClapTrap::_setEnergyPoint(unsigned int amount)
{
  this->_energy_point -= amount;
  if (this->_energy_point < 0)
    this->_energy_point = 0;
  else if (this->_energy_point > this->_max_energy_point)
    this->_energy_point = this->_max_energy_point;
  std::cout << "le niveau d'energie de " << this->_name << " est actuellement a " << this->_energy_point << std::endl;
}

std::string const ClapTrap::getname(void) const
{
  return (this->_name);
}

int ClapTrap::gethitpoint(void) const
{
  return (this->_hit_point);
}

int ClapTrap::getRangedAttackAmount(void) const
{
  return (this->_ranged_atk_dmg);
}

int ClapTrap::getMeleeAttackAmount(void) const
{
  return (this->_melee_atk_dmg);
}

int ClapTrap::getIntimidationAttackAmount(void) const
{
  return (this->_intimidate_atk_dmg);
}

int ClapTrap::getSingstarAttackAmount(void) const
{
  return (this->_singstar_atk_dmg);
}

int ClapTrap::getSMFAttackAmount(void) const
{
  return (this->_smellMyFeet_atk_dmg);
}
