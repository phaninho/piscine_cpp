#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant: public Enemy
{
  public:
    SuperMutant(void);
    SuperMutant(SuperMutant const & src);
    ~SuperMutant(void);
    virtual void takeDamage(int damage);
};

#endif
