#include "FragTrap.hpp"

FragTrap::FragTrapFn const FragTrap::function_array[5] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, &FragTrap::intimidatingShout, &FragTrap::singstarAttack , &FragTrap::smellMyFeetAttack};

FragTrap::FragTrap(std::string name): ClapTrap(name)
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
  std::cout << "-" << this->_name << " : Ordre numero 1 : proteger l'humanite. Ordre numero 2 : obeir a Jack coute que coute. Ordre numero 3 : danser bebe." << std::endl << "Mise a execution de l'ordre numero 3. Uhn tss uhn tss uhn tss.." << std::endl;
  return ;
}

FragTrap::FragTrap(void): ClapTrap()
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
  this->_name = "inconnu";
  std::cout << "FR4G-TP "<<  this->_name << " activation" << std::endl;
  std::cout << "-" << this->_name << " : je n'ai pas de nom." << std::endl;
  return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
  *this = src;
  std::cout << "On se ressemble pourtant on ne vie pas a la meme adresse" << std::endl;
  return ;
}

FragTrap  &FragTrap::operator=( FragTrap const & rhs)
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

FragTrap::~FragTrap(void)
{
  std::cout <<"-" << this->_name << " : Err... Je ne -- Je ne suis pas la! Je-Je-Je-Je... j'ai quité le building, c'est ce que j'ai fait! Je suis parti! Regarde!" << std::endl;
  return ;
}

void   FragTrap::singstarAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " viens de trouver un micro, et commence a chanter 'Miss camping' de Boris. " << target << " est prix au piege, il decide de s'arracher ces capteurs auditif esperant pouvoir contrer cette terrible attaque mais cela lui inflige " << this->_singstar_atk_dmg << " points de degats !" << std::endl;
}

void   FragTrap::smellMyFeetAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " prend une pause, il enleve ces chaussures mais malheureusement " << target << " passait dans le secteur, l'odeur a provoqué une defaillance dans ces circuits lui causant  " << this->_smellMyFeet_atk_dmg << " points de degats !" << std::endl;
}

void   FragTrap::meleeAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " avec ca technique d'attaque de melée, causant " << this->_melee_atk_dmg << " points de degats !" << std::endl;
}

void   FragTrap::intimidatingShout(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " avec ca technique d'intimidation, causant " << this->_intimidate_atk_dmg << " points de degats !" << std::endl;
}

void   FragTrap::rangedAttack(std::string const & target)
{
  std::cout << "FR4G-TP " << this->_name <<  " attaque " << target << " a bout portant, causant " << this->_ranged_atk_dmg << " points de degats !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  srand(time(0));
  if (this->_energy_point >= 25)
  {
    std::cout << "attaque random : " << std::endl;
    (this->*(FragTrap::function_array[rand() % 5]))(target);
    this->_setEnergyPoint(25);
  }
  else
    std::cout << "vous n'avez que " << this->_energy_point<< " points d'energy, c'est insuffisant pour effectuer l'attaque random, buvez un jus d'orange !" << std::endl;
}
