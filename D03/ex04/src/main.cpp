#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
  FragTrap sam("sam");
  SuperTrap jack("jack");
  jack.vaulthunter_dot_exe("knock knock");
  jack.ninjaShoebox(sam);
  jack.meleeAttack(sam.getname());
  sam.takeDamage(jack.getMeleeAttackAmount());
  jack.rangedAttack(sam.getname());
  sam.takeDamage(jack.getRangedAttackAmount());

  return (0);
}
