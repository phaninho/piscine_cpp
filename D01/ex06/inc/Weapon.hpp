#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
  public:

    Weapon(std::string type);
    ~Weapon(void);

    std::string const &getType(void);
    void              setType(std::string type);
    std::string       _type;

  private:
};

#endif
