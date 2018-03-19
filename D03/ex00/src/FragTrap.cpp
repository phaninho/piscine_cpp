#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name): _name(name)
{
  this->_hit_point = 100;
  this->_max_hit_point = 100;
  this->_energy_point = 100;
  this->_max_energy_point = 100;
  this->_level = 1;
  this->_melee_atk_dmg = 30;
  this->_ranged_atk_dmg = 20;
  this->_armor_dmg_reduc = 5;
  std::cout << "FR4G-TP "<<  this->_name << " activation" << std::endl;
  std::cout << "Ordre numero 1 : proteger l'humanite. Ordre numero 2 : obeir a Jack coute que coute. Ordre numero 3 : danser bebe." << std::endl << "Mise en action de l'ordre numero 3. Uhn tss uhn tss uhn tss.." << std::endl;
  return ;
}

FragTrap::~FragTrap(void)
{
  return ;
}

std::string const FragTrap::getname(void)
{
  return (this->_name);
}

int FragTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attacks " << target << " at range, causing " << this->_ranged_atk_dmg << " points of damage !" << std::endl;
  return (this->_ranged_atk_dmg);
}
