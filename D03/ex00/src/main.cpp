#include "FragTrap.hpp"
#include <iostream>

int main()
{
  // int dmg;
  FragTrap tedy("ted");
  FragTrap sam("sam");

  tedy.takeDamage(tedy.rangedAttack(sam.getname()));

  // std::cout << tedy.getname() << std::endl;
  return (0);
}
