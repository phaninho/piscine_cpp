#ifndef MOTHERINLAW_HPP
#define MOTHERINLAW_HPP

#include "Enemy.hpp"

class MotherInLaw: public Enemy
{
  public:
    MotherInLaw(void);
    MotherInLaw(MotherInLaw const & src);
    virtual ~MotherInLaw(void);
    virtual void takeDamage(int damage);
};

#endif
