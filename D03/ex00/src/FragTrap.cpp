#include "FragTrap.hpp"
#include <iostream>

std::string const action_array[5] = {"meleeAttack", "rangedAttack", "intimidatingShout", "singstarAttack", "smellMyFeetAttack"};
FragTrap::FragTrapFn const FragTrap::function_array[5] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::intimidatingShout, &FragTrap::singstarAttack , &FragTrap::smellMyFeetAttack};

FragTrap::FragTrap(std::string name): _name(name)
{
  this->_hit_point = 100;
  this->_max_hit_point = 100;
  this->_energy_point = 100;
  this->_max_energy_point = 100;
  this->_level = 1;
  this->_singstar_atk_dmg = 40;
  this->_melee_atk_dmg = 30;
  this->_ranged_atk_dmg = 20;
  this->_smellMyFeet_atk_dmg = 15;
  this->_intimidate_atk_dmg = 10;
  this->_armor_dmg_reduc = 5;
  std::cout << "FR4G-TP "<<  this->_name << " activation" << std::endl;
  std::cout << "Ordre numero 1 : proteger l'humanite. Ordre numero 2 : obeir a Jack coute que coute. Ordre numero 3 : danser bebe." << std::endl << "Mise en action de l'ordre numero 3. Uhn tss uhn tss uhn tss.." << std::endl;
  return ;
}

FragTrap::~FragTrap(void)
{
  std::cout << this->_name << " : Err... Je ne -- Je ne suis pas la! Je-Je-Je-Je... j'ai quité le building, c'est ce que j'ai fait! Je suis parti! Regarde!" << std::endl;
  return ;
}

void   FragTrap::singstarAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " viens de trouver un micro, et commence a chanter 'Miss camping' de Boris. " << target << " est prix au piege, il decide de se faire un saignée esperant pouvoir contrer cette terrible attaque mais cela lui inflige " << this->_singstar_atk_dmg << " points de degats !" << std::endl;
  // return (this->_singstar_atk_dmg);
}

void   FragTrap::smellMyFeetAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " prend une pause, il enleve ces chaussures mais malheureusement " << target << " passait dans le secteur, l'odeur a provoqué une defaillance dans ces circuits lui causant  " << this->_smellMyFeet_atk_dmg << " points de degats !" << std::endl;
  // return (this->_smellMyFeet_atk_dmg);
}

void   FragTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " avec ca technique d'attaque de melée, causant " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
  // return (this->_ranged_atk_dmg);
}

void   FragTrap::intimidatingShout(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " avec ca technique d'intimidation, causant " << this->_intimidate_atk_dmg << " points de degats !" << std::endl;
  // return (this->_intimidate_atk_dmg);
}

void   FragTrap::meleeAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " a bout portant, causant " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
  // return (this->_ranged_atk_dmg);
}

void  FragTrap::takeDamage(unsigned int amount)
{
  std::cout << this->_name << " viens de perdre " << amount - this->_armor_dmg_reduc << " HP" << std::endl;
  this->_sethitpoint(amount - this->_armor_dmg_reduc);
}

void FragTrap::beRepaired(unsigned int amount)
{
  std::cout << this->_name << " viens de regarder un best of de Russian Dash Cam, ce moment de franche rigolade lui redonne " << amount << " HP" << std::endl;
  this->_sethitpoint(-amount);
}

void FragTrap::_sethitpoint(unsigned int amount)
{
  this->_hit_point -= amount;
  if (this->_hit_point < 0)
    this->_hit_point = 0;
  else if (this->_hit_point > this->_max_hit_point)
    this->_hit_point = this->_max_hit_point;
  std::cout << this->_name << " a actuellement " << this->gethitpoint() << " points de vie" << std::endl;
}

std::string const FragTrap::getname(void) const
{
  return (this->_name);
}

int FragTrap::gethitpoint(void) const
{
  return (this->_hit_point);
}
