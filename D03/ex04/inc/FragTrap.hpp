#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:
    FragTrap(std::string name);
    ~FragTrap(void);

    void rangedAttack(std::string const & target);//fait
    void meleeAttack(std::string const & target);//fait
    void intimidatingShout(std::string const & target); //fait
    void singstarAttack(std::string const & target);//fait
    void smellMyFeetAttack(std::string const & target);//fait
    void vaulthunter_dot_exe(std::string const & target);

    typedef void (FragTrap::*FragTrapFn)(std::string const &);
    static FragTrapFn const function_array[];
};

#endif
