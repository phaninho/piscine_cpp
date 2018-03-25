#include "Sorcerer.hpp"

int main()
{
  Sorcerer *mages = new Sorcerer("Mel", "wizzard");
  std::cout << *mages << std::endl;
  delete mages;
  Sorcerer mage("Merlin", "Mage");
  std::cout << mage << std::endl;

  return(0);
}
