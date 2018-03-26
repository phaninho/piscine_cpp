#include "Character.hpp"

Character::Character(std::string const & name): _name(name)
{
    this->setAP(40);
    return ; 
}

Character::Character(Character const & src)
{
    *this = src;
    return ;
}

Character::Character(void): _name("No name")
{
    this->setAP(40);
    return ;    
}

 Character::~Character(void)
 {
    return ;
 }

 void   Character::recoverAP(void)
 {
     int AP = this->getAP();
     this->setAP(AP + 10);
     return ;
 }

 void Character::equip(AWeapon *weapon)
 {
     this->setWeapon(weapon);
     return ;
 }

void Character::attack(Enemy *enemy)
{
    if (this->getWeapon())
    {
        int AP = this->getAP();
        int enemyhp = enemy->getHP();

        std::cout << this->_name << " attacks " << enemy->getType() << " with a "<< this->getWeapon()->getname() << std::endl;
        this->getWeapon()->attack();
        this->setAP(AP - this->getWeapon()->getAPcost());
        enemy->sethp(enemyhp - this->getWeapon()->getDamage());
    }
    return ;
}

std::string Character::getName(void) const
{
    return (this->_name);
}

int Character::getAP(void) const
{
    return (this->_AP);
}

AWeapon *Character::getWeapon(void) const
{
    return (this->_weapon);
}

void Character::setAP(int ap)
{
    if (ap < 0)
        this->_AP = 0;
    else
        this->_AP = ap;
    return ;
}

void Character::setName(std::string name)
{
    this->_name = name;
    return ;
}
void Character::setWeapon(AWeapon *weapon)
{
    this->_weapon = weapon;
    return ;
}

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
