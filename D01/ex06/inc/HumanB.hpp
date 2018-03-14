#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>

class Humana
{
  public:

    HumanB(std::string name, std::type);
    ~HumanB(void);

  private:

    void	attack(void);

    std::string _name;
    Weapon *weapon;
};

#endif
