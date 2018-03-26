#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    public:
        Character(std::string const & name);
        Character(Character const & src);
        Character(void);
        ~Character(void);
        void recoverAP(void);
        void equip(AWeapon *weapon);
        void attack(Enemy *enemy);
        std::string getName(void) const;
        int getAP(void) const;
        AWeapon *getWeapon(void) const;
        void setAP(int ap);
        void setName(std::string name);
        void setWeapon(AWeapon *weapon);
        Character &operator=(Character const &rhs);

    private:
        std::string _name;
        int _AP;
        AWeapon *_weapon;
};

#endif