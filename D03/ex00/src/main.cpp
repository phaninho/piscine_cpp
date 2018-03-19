#include "FragTrap.hpp"
#include <iostream>

int main()
{
  // int dmg;
  FragTrap tedy("ted");
  FragTrap sam("sam");

  tedy.rangedAttack(sam.getname());
  sam.rangedAttack(tedy.getname());

  sam.beRepaired(25);
  return (0);
}
