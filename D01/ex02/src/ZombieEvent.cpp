#include "ZombieEvent.hpp"
#include <string>
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
  // if (!type.empty())
    // ZombieEvent::setZombieType(type);
  return;
}

ZombieEvent::~ZombieEvent(void)
{
  return;
}

void ZombieEvent::setZombieType(std::string type)
{
  if (!type.empty())
    this->_type = type;
}

Zombie*   ZombieEvent::newZombie(std::string name)
{
  Zombie *zombie = new Zombie(this->_type);
  if (!name.empty())
    zombie->setname(name);
  return (zombie);
}

void  ZombieEvent::randomChump(void)
{
  std::string names[6] = {"jack", "john", "jim", "al", "burk", "ben"};
  ZombieEvent ev;

  srand(time(0));
  Zombie ranzomb("le casse couille");
  ranzomb.setname(names[rand() % 6]);
  ranzomb.announce();
}
