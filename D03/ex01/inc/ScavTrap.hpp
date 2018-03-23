#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

    void rangedAttack(std::string const & target);//fait
    void meleeAttack(std::string const & target);//fait
    void intimidatingShout(std::string const & target); //fait
    void singstarAttack(std::string const & target);//fait
    void smellMyFeetAttack(std::string const & target);//fait
    void challengeNewcomer(std::string const & target);

    void takeDamage(unsigned int amount);//fait
    void beRepaired(unsigned int amount);//fair

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
    ScavTrap &operator=( ScavTrap const & rhs);

  private:
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
    static std::string const _challenges[5];
    void _sethitpoint(unsigned int amount);//fait
    void _setEnergyPoint(unsigned int amount);
};

#endif
