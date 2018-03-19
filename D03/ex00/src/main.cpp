#include "FragTrap.hpp"
#include <iostream>

int main()
{
  int dmg;
  FragTrap tedy("ted");
  FragTrap sam("sam");

  dmg = tedy.rangedAttack(sam.getname());

  // std::cout << tedy.getname() << std::endl;
  return (0);
}
