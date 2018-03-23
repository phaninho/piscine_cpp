#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap(void);

    void rangedAttack(std::string const & target);//fait
    void meleeAttack(std::string const & target);//fait
    void intimidatingShout(std::string const & target); //fait
    void singstarAttack(std::string const & target);//fait
    void smellMyFeetAttack(std::string const & target);//fait
    void vaulthunter_dot_exe(std::string const & target);
    FragTrap &operator=( FragTrap const & rhs);

    typedef void (FragTrap::*FragTrapFn)(std::string const &);
    static FragTrapFn const function_array[];
};

#endif
