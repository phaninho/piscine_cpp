#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
  public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap( ClapTrap const & src );
    ~ClapTrap(void);

    void takeDamage(unsigned int amount);//fait
    std::string const getname(void) const;//fait
    int gethitpoint(void) const;//fait
    int getRangedAttackAmount(void) const;//fait
    int getMeleeAttackAmount(void) const;//fait
    int getIntimidationAttackAmount(void) const;//fait
    int getSingstarAttackAmount(void) const;//fait
    int getSMFAttackAmount(void) const;//fait
    int getmaxhitpoint(void) const;
    int getenergypoint(void) const;
    int getmaxenergypoint(void) const;
    int getlevel(void) const;
    int getArmorReducAmount(void) const;
    void _sethitpoint(unsigned int amount);//fait
    void _setEnergyPoint(unsigned int amount);
    void beRepaired(unsigned int amount);//fair
    ClapTrap	&operator=( ClapTrap const & rhs );

  protected:
    int _hit_point;
    int _max_hit_point;
    int _energy_point;
    int _max_energy_point;
    int _level;
    int _singstar_atk_dmg;
    int _melee_atk_dmg;
    int _ranged_atk_dmg;
    int _smellMyFeet_atk_dmg;
    int _intimidate_atk_dmg;
    int _armor_dmg_reduc;
    std::string _name;

};

#endif
