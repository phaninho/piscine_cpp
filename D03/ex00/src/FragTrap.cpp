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
  std::cout << "Err... Je ne -- Je ne suis pas la! Je-Je-Je-Je... j'ai quité le building, c'est ce que j'ai fait! Je suis parti! Regarde!" << std::endl;
  return ;
}

std::string const FragTrap::getname(void)
{
  return (this->_name);
}

int   FragTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " a bout portant, causant " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
  return (this->_ranged_atk_dmg);
}

void  FragTrap::takeDamage(unsigned int amount)
{
  std::cout << this->_name << " viens de perdre " << amount - this->_armor_dmg_reduc << " HP" << std::endl;
  this->sethitpoint(amount - this->_armor_dmg_reduc);
}

void FragTrap::sethitpoint(unsigned int amount)
{
  this->_hit_point -= amount;
  std::cout << this->_name << " a actuellement " << this->_hit_point << " points de vie" << std::endl; 
}
