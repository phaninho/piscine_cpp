#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Farmer.hpp"

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
  Farmer charles("Charles Ingals");
  Victim jim("Jimmy");
  Peon joe("Joe");
  std::cout << robert << jim << joe << charles;
  robert.polymorph(jim);
  robert.polymorph(joe);
  robert.polymorph(charles);

  return(0);
}
