#ifndef TOOTHBRUSH_HPP
#define TOOTHBRUSH_HPP

#include "AWeapon.hpp"

class ToothBrush: public AWeapon
{
  public:
    ToothBrush(void);
    ToothBrush(ToothBrush const &src);
    virtual ~ToothBrush(void);
    virtual void attack(void) const;
    ToothBrush &operator=(ToothBrush const &rhs);
};

#endif