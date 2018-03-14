#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, std::type): _name(name), _type(type)
{
  return ;
}

HumanB::~HumanB(void)
{
  return ;
}

void	HumanB::attack(void)
{
  std::cout << this->_name << " attacks with his" << this->_type << std::endl;
}
