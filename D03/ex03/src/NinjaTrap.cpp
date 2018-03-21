#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
  this->_hit_point = 60;
  this->_max_hit_point = 60;
  this->_energy_point = 120;
  this->_max_energy_point = 120;
  this->_level = 1;
  this->_singstar_atk_dmg = 20;
  this->_melee_atk_dmg = 60;
  this->_ranged_atk_dmg = 5;
  this->_smellMyFeet_atk_dmg = 15;
  this->_intimidate_atk_dmg = 10;
  this->_armor_dmg_reduc = 0;
  std::cout << "NINJ4-TP "<<  this->_name << " activation" << std::endl;
  std::cout << "-" << this->_name << " : Bonjour, J'ai une livraison de sushi au nom de... heu... Mr...." << std::endl;
  return ;
}

NinjaTrap::~NinjaTrap(void)
{
  std::cout <<"-" << this->_name << " : je veux plus etre Ninja, dans les quartier on m'appel JaNin. Demain je deviens Samourai" << std::endl;
  return ;
}

void NinjaTrap::ninjaShoebox(FragTrap & target)
{
  std::cout << this->_name << " est maitre dans l'art de l'imitation. "<< target.getname() << " est dans le public ce soir et subi "<< this->_singstar_atk_dmg << " points de degats, On dira de lui qu'il etait au mauvais endroit, au mauvais moment." << std::endl;
  target.takeDamage(this->_singstar_atk_dmg);
  return ;
}

void NinjaTrap::ninjaShoebox(ScavTrap & target)
{
  std::cout << "Regle numero un : ne jamais etre dans la meme piece qu'un Ninja." << std::endl << "Regel numero 2 : l'esprit d'un Ninja est tellement pure qu'il pense que le corps n'a besoin d'etre lavé (42 est un regroupement de Ninja)" << std::endl << target.getname() << " recoit " << this->_smellMyFeet_atk_dmg << " points de degats a cause de la regle numero 2" << std::endl;
  target.takeDamage(this->_smellMyFeet_atk_dmg);
  return ;
}

void NinjaTrap::ninjaShoebox(ClapTrap & target)
{

  std::cout << "Dans la vie il y ceux qui ont le sabre et ceux qui creusent, toi tu creuse. " << target.getname() << " recoit " << this->_melee_atk_dmg << " points de dommages!" << std::endl;
  target.takeDamage(this->_melee_atk_dmg);
  return ;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
  std::cout << this->_name << " effectue ca fameuse dans de la victoire apprise lors de son entrainement en siberie. Vous pouvez admirer les videos de son professeur de danse a cette adresse https://www.youtube.com/watch?v=6yA3ieJynxQ " << target.getname() << " recoit " << this->_ranged_atk_dmg << " points de degats." << std::endl;
  target.takeDamage(this->_ranged_atk_dmg);
  return ;
}

void   NinjaTrap::singstarAttack(std::string const & target)
{
  std::cout << "NINJ4-TP " << this->_name <<  " ne veux ceder ca place au karaoké, il lance son micro shuriken sur " << target << " qui etait le prochain sur la liste. Cela lui inflige " << this->_singstar_atk_dmg << " points de degats !" << std::endl;
}

void   NinjaTrap::smellMyFeetAttack(std::string const & target)
{
  std::cout << "NINJ4-TP " << this->_name <<  " utilise ses chaussettes qu'il n'a jamais retiré depuis qu'il a commencé ca formation de ninja. C'est une veritable grenade odorante. " << target << " recoit " << this->_smellMyFeet_atk_dmg << " points de degats !" << std::endl;
}

void   NinjaTrap::meleeAttack(std::string const & target)
{
  std::cout << "NINJ4-TP " << this->_name <<  " attaque " << target << " avec ses fameuses boulettes de riz, causant " << this->_melee_atk_dmg << " points de degats !" << std::endl;
}

void   NinjaTrap::intimidatingShout(std::string const & target)
{
  std::cout << "NINJ4-TP " << this->_name <<  " sait miauler, Miaou dit-il.  De par son alergie, " << target << " se met a suffoquer. Cette attaque psychologique lui cause " << this->_intimidate_atk_dmg << " points de degats !" << std::endl;
}

void   NinjaTrap::rangedAttack(std::string const & target)
{
  std::cout << "NINJ4-TP " << this->_name <<  " a decider de repeter tout ce que " << target << " dit. A bout de Nerf " << target << " essai de mettre fin a ces jours en se cognant plusieurs fois la tete contre un mur mais une fois la bosse suffisement douloureuse et aillant provoqué " << this->_ranged_atk_dmg << " points de degats, il parti chercher des glacons.!" << std::endl;
}
