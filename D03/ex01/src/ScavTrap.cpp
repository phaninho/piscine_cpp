#include "ScavTrap.hpp"
#include <string>
#include <iostream>

std::string const ScavTrap::_challenges[5] = {"assister a une competition de patinage artistique en integralité", "regarder ca grand mere faire un show de table dance", "faire 50 pompes sans les mains", "faire la stackoverflow dance en presence de zaz", "goutter a gargamel pour verifier si il est salé"};


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
  std::cout << "SC4V-TP " << this->_name << " activation" << std::endl;
  std::cout << "-" << this->_name << " : Poussez vous, c'est a moi de danser bebe!" << std::endl;
}

ScavTrap::ScavTrap(void)
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
  this->_name = "inconnu";
  std::cout << "SC4V-TP " << this->_name << " personne ne m'appel jamais" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
  *this = src;
  std::cout << "On se ressemble pourtant on ne vie pas a la meme adresse" << std::endl;
  return ;
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "-" << this->_name << " : Comme dirait Cartman \"Je vous enmerde et je rentre a ma maison !\"" << std::endl;
}

ScavTrap  &ScavTrap::operator=( ScavTrap const & rhs)
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
  std::cout << "SC4V-TP " << this->_name << " saute dans la foule, comme a Woodstock en 1969 mais personnes n'est la pour l'amortir et tombe de plein fouet sur "<< target << " qui faisait la technique de l'Opossum."<< target << " recoit " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::intimidatingShout(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " attaque " << target << " en lui avouant qu'il a couché avec ca mere. " << target << " les nerfs a vif met un coup de point dand un mur en beton. Cela lui provoque " << this->_intimidate_atk_dmg << " points de degats !" << std::endl;
}

void   ScavTrap::rangedAttack(std::string const & target)
{
  std::cout << "SC4V-TP " << this->_name <<  " lance un carte routiere a " << target << ". La carte lui bouche le systeme d'aeration qui provoque une surchauffe. " << target << " recoit "<< this->_ranged_atk_dmg << " points de degats !" << std::endl;
}

void  ScavTrap::challengeNewcomer(std::string const & target)
{
  std::string challenge;
  	std::srand(std::time(nullptr));
  	challenge = ScavTrap::_challenges[std::rand() % 5];
  	std::cout << this->_name << " lance un defis a " << target << " qui va devoir "
  		<< challenge << ". J'ai un doute sur le bien fondé de cette epreuve!" << std::endl;
  	return;
}

void  ScavTrap::takeDamage(unsigned int amount)
{
  std::cout << this->_name << " viens de perdre " << amount - this->_armor_dmg_reduc << " HP" << std::endl;
  this->_sethitpoint(amount - this->_armor_dmg_reduc);
}

void ScavTrap::beRepaired(unsigned int amount)
{
  std::cout << this->_name << " aime les belles chaussures, juste le fait d'y penser lui remonte ces HP de " << amount << " points" << std::endl;
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

int ScavTrap::getmaxhitpoint(void) const
{
  return (this->_max_hit_point);
}

int ScavTrap::getenergypoint(void) const
{
  return (this->_energy_point);
}

int ScavTrap::getmaxenergypoint(void) const
{
  return (this->_max_energy_point);
}

int ScavTrap::getlevel(void) const
{
  return (this->_level);
}

int ScavTrap::getArmorReducAmount(void) const
{
  return (this->_armor_dmg_reduc);
}
