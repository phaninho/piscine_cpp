#include "Human.hpp"
#include <iostream>

int main(void)
{
  Human humanA("Victor");
  Human humanB("Jack");

  humanA.action("meleeAttack", humanB.getname());
  humanB.action("meleeAttack", humanA.getname());

  humanA.action("rangedAttack", humanB.getname());
  humanB.action("rangedAttack", humanA.getname());

  humanA.action("intimidatingShout", humanB.getname());
  humanB.action("intimidatingShout", humanA.getname());

  return (0);
}
