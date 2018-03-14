#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <string>


std::string names[10] = {"jack", "john", "jim", "william", "burk", "ben", "arnold", "fred", "ali", "bruce"};
std::string types[10] = {"golfeur", "cowboy", "sheriff", "instructeur", "rockeur", "surfer", "skater", "hipster", "sysAdmin", "Hacker"};

ZombieHorde::ZombieHorde(int N): _N(N), _horde(new Zombie[N])
{
  srand(time(0));
  for(int i = 0; i < this->_N; i++)
  {
    Zombie &zombie = this->_horde[i];
    zombie.setname(names[rand() % 10]);
    zombie.settype(types[rand() % 10]);
  }
  return ;
}

ZombieHorde::~ZombieHorde(void)
{
  delete [] this->_horde;
  return ;
}

void ZombieHorde::announce(void) const
{
  for(int i = 0; i < this->_N; i++)
  {
    Zombie zombie = this->_horde[i];
    zombie.announce();
  }
}
