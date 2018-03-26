#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

// #include <iostream>

int main()
{
  Character* zaz = new Character("zaz");
  Character* ben = new Character("ben");
  
  std::cout << *zaz;
  std::cout << *ben;
  
  Enemy* a = new SuperMutant();  
  Enemy* b = new RadScorpion();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  zaz->equip(pr);
  std::cout << *zaz;
  ben->equip(pr);
  std::cout << *ben;
  ben->attack(a);
  zaz->attack(a);
  
  zaz->equip(pf);
  zaz->attack(a);
  zaz->attack(a);
  zaz->attack(a);
  zaz->attack(a);

  zaz->attack(b);
  std::cout << *zaz;  
  zaz->attack(b);
  std::cout << *zaz;  
  zaz->recoverAP();
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  return 0;
}
