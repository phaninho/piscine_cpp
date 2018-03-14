#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
  public:

    ZombieHorde(int N);
    ~ZombieHorde(void);
    void announce(void) const;

  private:

    int _N;
    Zombie *_horde;
};

#endif
