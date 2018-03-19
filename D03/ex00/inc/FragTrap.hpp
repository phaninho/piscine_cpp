#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>

class FragTrap
{
  public:
    FragTrap(std::string name);
    ~FragTrap(void);
    int rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string const getname(void);
    void sethitpoint(unsigned int amount);

  private:
    int _hit_point;
    int _max_hit_point;
    int _energy_point;
    int _max_energy_point;
    int _level;
    int _melee_atk_dmg;
    int _ranged_atk_dmg;
    int _armor_dmg_reduc;
    std::string _name;
};

#endif
