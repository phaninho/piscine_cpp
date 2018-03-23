#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
  ClapTrap *tss = new ClapTrap("billy");
  delete tss;
  ScavTrap ely("ely");
  FragTrap sam("sam");
  std::cout << std::endl;

  ely.rangedAttack(sam.getname());
  sam.takeDamage(ely.getRangedAttackAmount());
  std::cout << std::endl;

  sam.rangedAttack(ely.getname());
  ely.takeDamage(sam.getRangedAttackAmount());
  std::cout << std::endl;

  sam.singstarAttack(ely.getname());
  ely.takeDamage(sam.getSingstarAttackAmount());
  std::cout << std::endl;

  ely.singstarAttack(sam.getname());
  sam.takeDamage(ely.getSingstarAttackAmount());
  std::cout << std::endl;

  ely.smellMyFeetAttack(sam.getname());
  sam.takeDamage(ely.getSMFAttackAmount());
  std::cout << std::endl;

  sam.smellMyFeetAttack(ely.getname());
  ely.takeDamage(sam.getSMFAttackAmount());
  std::cout << std::endl;

  ely.meleeAttack(sam.getname());
  sam.takeDamage(ely.getMeleeAttackAmount());
  std::cout << std::endl;

  ely.intimidatingShout(sam.getname());
  sam.takeDamage(ely.getIntimidationAttackAmount());
  std::cout << std::endl;

  sam.intimidatingShout(ely.getname());
  ely.takeDamage(sam.getIntimidationAttackAmount());
  std::cout << std::endl;

  sam.vaulthunter_dot_exe(ely.getname());
  std::cout << std::endl;
  ely.challengeNewcomer(sam.getname());
  std::cout << std::endl;

  sam.beRepaired(25);
  std::cout << std::endl;
  ely.beRepaired(25);
  std::cout << std::endl;

  return (0);
}
