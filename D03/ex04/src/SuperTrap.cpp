#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
  this->_hit_point = FragTrap::_hit_point;
  this->_max_hit_point = FragTrap::_max_hit_point;
  this->_energy_point = NinjaTrap::_energy_point;
  this->_max_energy_point = NinjaTrap::_max_energy_point;
  this->_level = 1;
  this->_singstar_atk_dmg = 20;
  this->_melee_atk_dmg = NinjaTrap::_melee_atk_dmg;
  this->_ranged_atk_dmg = FragTrap::_ranged_atk_dmg;
  this->_smellMyFeet_atk_dmg = 15;
  this->_intimidate_atk_dmg = 10;
  this->_armor_dmg_reduc = FragTrap::_armor_dmg_reduc;
  std::cout << "SUP3R-TP " << this->_name << " activation" <<std::endl << "-" << this->_name << " : He j'suis pas venu ici pour souffrir ok?" << std::endl;
  return ;
}

SuperTrap::~SuperTrap(void)
{
  std::cout << "Adieux mode cruel" << std::endl;
  return ;
}
//
// void SuperTrap::rangedAttack(std::string const & target)
// {
//   FragTrap::rangedAttack(target);
//   return ;
// }
//
// void SuperTrap::meleeAttack(std::string const & target)
// {
//   NinjaTrap::rangedAttack(target);
//   return ;
// }
//
// void SuperTrap::ninjaShoebox(FragTrap & target)
// {
//   NinjaTrap::ninjaShoebox(target)
//   return ;
// }
//
// void SuperTrap::ninjaShoebox(ScavTrap & target)
// {
//   NinjaTrap::ninjaShoebox(target)
//   return ;
// }
//
// void SuperTrap::ninjaShoebox(ClapTrap & target)
// {
//   NinjaTrap::ninjaShoebox(target)
//   return ;
// }
//
// void SuperTrap::ninjaShoebox(NinjaTrap & target)
// {
//   NinjaTrap::ninjaShoebox(target)
//   return ;
// }
//
// void SuperTrap::ninjaShoebox(SuperTrap & target)
// {
//   NinjaTrap::ninjaShoebox(target)
//   return ;
// }
//
// void SuperTrap::vaulthunter_dot_exe(std::string const & target)
// {
//
// }
