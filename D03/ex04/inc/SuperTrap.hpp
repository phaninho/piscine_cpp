#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
// #include "ClapTrap.hpp"
#include <string>

class SuperTrap: public NinjaTrap, public FragTrap
{
  public:
    SuperTrap(std::string name);
    ~SuperTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
};

#endif
