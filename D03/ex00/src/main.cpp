#include "FragTrap.hpp"
#include <iostream>

int main()
{
  FragTrap *rick = new FragTrap("rick");
  delete rick;

  FragTrap tedy("ted");
  FragTrap sam("sam");
  std::cout << std::endl;

  tedy.rangedAttack(sam.getname());
  sam.takeDamage(tedy.getRangedAttackAmount());
  std::cout << std::endl;

  sam.singstarAttack(tedy.getname());
  tedy.takeDamage(sam.getSingstarAttackAmount());
  std::cout << std::endl;

  tedy.smellMyFeetAttack(sam.getname());
  sam.takeDamage(tedy.getSMFAttackAmount());
  std::cout << std::endl;

  sam.meleeAttack(tedy.getname());
  tedy.takeDamage(sam.getMeleeAttackAmount());
  std::cout << std::endl;

  tedy.intimidatingShout(sam.getname());
  sam.takeDamage(tedy.getIntimidationAttackAmount());
  std::cout << std::endl;

  sam.vaulthunter_dot_exe(tedy.getname());
  std::cout << std::endl;
  sam.vaulthunter_dot_exe(tedy.getname());
  std::cout << std::endl;
  sam.vaulthunter_dot_exe(tedy.getname());
  std::cout << std::endl;
  sam.vaulthunter_dot_exe(tedy.getname());
  std::cout << std::endl;
  sam.vaulthunter_dot_exe(tedy.getname());
  std::cout << std::endl;

  sam.beRepaired(25);
  std::cout << std::endl;

  return (0);
}
