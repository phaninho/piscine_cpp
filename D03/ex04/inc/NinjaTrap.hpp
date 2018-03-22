#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
  public:
    NinjaTrap(std::string name);
    ~NinjaTrap(void);
    void rangedAttack(std::string const & target);//fait
    void meleeAttack(std::string const & target);//fait
    void intimidatingShout(std::string const & target); //fait
    void singstarAttack(std::string const & target);//fait
    void smellMyFeetAttack(std::string const & target);//fait
    void ninjaShoebox(FragTrap & target);
    void ninjaShoebox(ScavTrap & target);
    void ninjaShoebox(ClapTrap & target);
    void ninjaShoebox(NinjaTrap & target);
};

#endif
