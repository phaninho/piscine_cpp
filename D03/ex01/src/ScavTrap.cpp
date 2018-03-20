#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : FragTrap( name)
{
  this->_hit_point = 100;
  this->_max_hit_point = 100;
  this->_energy_point = 50;
  this->_max_energy_point = 50;
  this->_level = 1;
  this->_singstar_atk_dmg = 35;
  this->_melee_atk_dmg = 20;
  this->_ranged_atk_dmg = 15;
  this->_smellMyFeet_atk_dmg = 10;
  this->_intimidate_atk_dmg = 10;
  this->_armor_dmg_reduc = 3;
  std::cout << "-" << this->_name << " : Poussez vous, c'est a moi de danser!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "-" << this->_name << " : Comme dirait Cartman \"Je vous enmerde et je rentre a ma maison !\"" << std::endl;
}
