#ifndef FARMER_HPP
#define FARMER_HPP

#include "Victim.hpp"
#include "string"

class Farmer: public Victim
{
  public:
    Farmer(Farmer const & src);
    Farmer(std::string name);
    virtual ~Farmer(void);
    Farmer &operator=(Farmer const &rhs);
    virtual void getPolymorphed(void) const;

  private:
    Farmer(void);
};

#endif
