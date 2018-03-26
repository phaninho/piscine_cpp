#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
// #include <iostream>

class PowerFist: public AWeapon
{
  public:
    PowerFist(void);
    PowerFist(PowerFist const &src);
    virtual ~PowerFist(void);
    virtual void attack(void) const;
    PowerFist &operator=(PowerFist const &rhs);
};

#endif
