#include "Sorcerer.hpp"

int main()
{
  Sorcerer *mages = new Sorcerer("Mel", "wizzard");
  delete mages;
  Sorcerer mage("Merlin", "Mage");
  return(0);
}
