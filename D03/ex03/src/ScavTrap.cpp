#include "ScavTrap.hpp"

std::string const ScavTrap::_challenges[5] = {"assister a une competition de patinage artistique en integralité", "regarder ca grand mere faire un show de table dance", "faire 50 pompes sans les mains", "faire la stackoverflow dance en presence de zaz", "goutter a gargamel pour verifier si il est salé"};


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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
