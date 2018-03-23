#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
// #include "ClapTrap.hpp"
#include <string>

class SuperTrap: public NinjaTrap, public FragTrap
{
  public:
    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & src);
    ~SuperTrap(void);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    SuperTrap &operator=(SuperTrap const &rhs);
};

#endif
