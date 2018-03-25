#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include "string"
class Peon: public Victim
{
  public:
    Peon(void);
    Peon(Peon const & src);
    Peon(std::string name);
    ~Peon(void);
    Peon &operator=(Peon const &rhs);
    virtual void getPolymorphed(void) const;
};

#endif
