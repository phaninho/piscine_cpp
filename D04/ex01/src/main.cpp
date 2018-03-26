#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "ToothBrush.hpp"
#include "MotherInLaw.hpp"

// #include <iostream>

int main()
{
  Character* zaz = new Character("zaz");
  Character* ben = new Character("ben");
  
  std::cout << *zaz;
  std::cout << *ben;
  
  Enemy* a = new SuperMutant();  
  Enemy* b = new RadScorpion();
  Enemy* c = new MotherInLaw();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  AWeapon* tb = new ToothBrush();
  zaz->equip(pr);
  std::cout << *zaz;
  ben->equip(pr);
  std::cout << *ben;
  ben->attack(a);
  zaz->attack(a);
  
  zaz->equip(pf);
  zaz->attack(a);
  zaz->attack(b);
  zaz->attack(c);
  zaz->attack(a);

  zaz->attack(b);
  std::cout << *zaz;  
  zaz->attack(b);
  std::cout << *zaz;  
  zaz->recoverAP();
  zaz->equip(tb);
  std::cout << *zaz;
  zaz->attack(c);  
  zaz->equip(pf);
  zaz->recoverAP();
  zaz->recoverAP();
  zaz->recoverAP();
  zaz->recoverAP();    
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(c);
  zaz->attack(c);
  zaz->attack(c);
  zaz->attack(c);
  zaz->attack(b);
  zaz->equip(tb);  
  std::cout << *zaz;
  return 0;
}
