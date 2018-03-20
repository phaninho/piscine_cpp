#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : _name( name)
{
  this->_hit_point = 100;
  this->_max_hit_point = 100;
  this->_energy_point = 50;
  this->_max_energy_point = 50;
  this->_level = 1;
  this->_singstar_atk_dmg = 50;
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

void   ScavTrap::singstarAttack(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " pense etre doué d'un talent incompris. Lors des 3 dernieres editions de The Voice il n'a pas ete retenu. Cette fois c'est a " << target << " d'en juger. " << target << " se met a saigner des capteurs, bien qu'il n'en ai pas, cette  attaque lui inflige " << this->_singstar_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::smellMyFeetAttack(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " cour sur les mains et attrape " << target << " par le cou. "<< target << " est obligé d'endurer la vue des verrues plantaire de son assaillant. Cette prise lui inglige " << this->_smellMyFeet_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::meleeAttack(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name << " saute dans la foule, comme a Woodstock en 1969 causant mais personnes n'est la pour l'amortir et tombe de plein fouet sur "<< target << " qui faisait la technique de l'Opossum."<< target << " recoit " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::intimidatingShout(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " attaque " << target << " en lui avouant qu'il a couché avec ca mere. " << target << " les nerfs a vif met un coup de point dand un mur en beton. Cela lui provoque " << this->_intimidate_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::rangedAttack(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " lance un carte routiere a " << target << " qui fini par trebucher dessus, causant " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
}

// void ScavTrap::vaulthunter_dot_exe(std::string const & target)
// {
//   srand(time(0));
//   if (this->_energy_point >= 25)
//   {
//     (this->*(ScavTrap::function_array[rand() % 5]))(target);
//     this->_setEnergyPoint(25);
//   }
//   else
//     std::cout << "vous n'avez que " << this->_energy_point<< " points d'energy, c'est insuffisant pour effectuer l'attaque random, buvez un jus d'orange !" << std::endl;
// }

void  ScavTrap::takeDamage(unsigned int amount)
{
  std::cout << this->_name << " viens de perdre " << amount - this->_armor_dmg_reduc << " HP" << std::endl;
  this->_sethitpoint(amount - this->_armor_dmg_reduc);
}

void ScavTrap::beRepaired(unsigned int amount)
{
  std::cout << this->_name << " viens de regarder un best of de Russian Dash Cam, ce moment de remise en question de l'intelligence humaine lui remonte son ego. " << this->_name << " se sent dorenavant superieur a son createur ce qui a pour effet de booster son HP de " << amount << " points" << std::endl;
  this->_sethitpoint(-amount);
}

void ScavTrap::_sethitpoint(unsigned int amount)
{
  this->_hit_point -= amount;
  if (this->_hit_point < 0)
    this->_hit_point = 0;
  else if (this->_hit_point > this->_max_hit_point)
    this->_hit_point = this->_max_hit_point;
  std::cout << this->_name << " a actuellement " << this->gethitpoint() << " points de vie" << std::endl;
}

void ScavTrap::_setEnergyPoint(unsigned int amount)
{
  this->_energy_point -= amount;
  if (this->_energy_point < 0)
    this->_energy_point = 0;
  else if (this->_energy_point > this->_max_energy_point)
    this->_energy_point = this->_max_energy_point;
  std::cout << "le niveau d'energie de " << this->_name << " est actuellement a " << this->_energy_point << std::endl;
}

std::string const ScavTrap::getname(void) const
{
  return (this->_name);
}

int ScavTrap::gethitpoint(void) const
{
  return (this->_hit_point);
}

int ScavTrap::getRangedAttackAmount(void) const
{
  return (this->_ranged_atk_dmg);
}

int ScavTrap::getMeleeAttackAmount(void) const
{
  return (this->_melee_atk_dmg);
}

int ScavTrap::getIntimidationAttackAmount(void) const
{
  return (this->_intimidate_atk_dmg);
}

int ScavTrap::getSingstarAttackAmount(void) const
{
  return (this->_singstar_atk_dmg);
}

int ScavTrap::getSMFAttackAmount(void) const
{
  return (this->_smellMyFeet_atk_dmg);
}
