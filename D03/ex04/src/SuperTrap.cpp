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

SuperTrap::SuperTrap(void): ClapTrap(), NinjaTrap(), FragTrap()
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
  this->_name = "inconnue";
  std::cout << "SUP3R-TP " << this->_name << " , est ce que j'existe?" << std::endl;
  return ;
}


SuperTrap::SuperTrap(SuperTrap const & src): ClapTrap(src), NinjaTrap(src), FragTrap(src)
{
  *this = src;
  std::cout << "technique du multi clonage" << std::endl;
  return ;
}

SuperTrap  &SuperTrap::operator=( SuperTrap const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_hit_point = rhs.gethitpoint();
  this->_max_hit_point = rhs.getmaxhitpoint();
  this->_energy_point = rhs.getenergypoint();
  this->_max_energy_point = rhs.getmaxenergypoint();
  this->_level = rhs.getlevel();
  this->_singstar_atk_dmg = rhs.getSingstarAttackAmount();
  this->_melee_atk_dmg = rhs.getMeleeAttackAmount();
  this->_ranged_atk_dmg = rhs.getRangedAttackAmount();
  this->_smellMyFeet_atk_dmg = rhs.getSMFAttackAmount();
  this->_intimidate_atk_dmg = rhs.getIntimidationAttackAmount();
  this->_armor_dmg_reduc = rhs.getArmorReducAmount();
  this->_name = rhs.getname();
  return (*this);
}

SuperTrap::~SuperTrap(void)
{
  std::cout << "Adieux mode cruel" << std::endl;
  return ;
}

void			SuperTrap::meleeAttack(std::string const &target)
{
  this->FragTrap::meleeAttack(target);
}

void			SuperTrap::rangedAttack(std::string const &target)
{
  this->NinjaTrap::rangedAttack(target);
}
