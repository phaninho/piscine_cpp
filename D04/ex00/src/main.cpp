#include "Sorcerer.hpp"

int main()
{
  Sorcerer *mages = new Sorcerer("Mel", "wizzard");
  std::cout << *mages << std::endl;
  delete mages;
  Sorcerer mage("Merlin", "Mage");
  mage.introduce();

  return(0);
}
