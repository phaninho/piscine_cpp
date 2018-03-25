#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
  // Sorcerer *mages = new Sorcerer("Mel", "wizzard");
  // std::cout << *mages << std::endl;
  // delete mages;
  //
  // Sorcerer mage("Merlin", "Mage");
  // mage.introduce();
  // Victim ben("benoit");
  // mage.polymorph(ben);
  //
  // Peon pet("Peter");
  // std::cout << ben << pet;
  // mage.polymorph(pet);
  Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon joe("Joe");
std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);
return 0;
  return(0);
}
