#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
  public:
    ScavTrap(std::string name);
    ~ScavTrap(void);
};

#endif
