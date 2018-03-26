#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle: public AWeapon
{
  public:
    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const &src);
    virtual ~PlasmaRifle(void);
    virtual void attack(void) const;
    PlasmaRifle &operator=(PlasmaRifle const &rhs);
};

#endif
