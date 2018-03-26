#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
  public:
    RadScorpion(void);
    RadScorpion(RadScorpion const & src);
    virtual ~RadScorpion(void);
    virtual void takeDamage(int damage);
};

#endif
