#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
  return ;
}

HumanA::~HumanA(void)
{
  return ;
}

void	HumanA::attack(void)
{
  std::cout << this->_name << " attacks with his " << this->_weapon._type << std::endl;
}
