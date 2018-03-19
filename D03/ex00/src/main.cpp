#include "FragTrap.hpp"
#include <iostream>

int main()
{
  // int dmg;
  FragTrap tedy("ted");
  FragTrap sam("sam");

  sam.takeDamage(tedy.rangedAttack(sam.getname()));
  sam.takeDamage(tedy.rangedAttack(sam.getname()));

  sam.beRepaired(25);
  return (0);
}
