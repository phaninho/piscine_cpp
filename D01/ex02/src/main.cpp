#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
  ZombieEvent zombieevent;
  Zombie *zombie;

  zombieevent.setZombieType("cowboy");
  zombie = zombieevent.newZombie("Billy");
  zombie->announce();
  delete zombie;
  
  zombieevent.randomChump();
  return (0);
}
