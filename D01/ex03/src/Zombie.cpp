#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
  return ;
}

Zombie::Zombie(std::string type): _type(type)
{
  return ;
}

Zombie::~Zombie(void)
{
  return ;
}

void	 Zombie::announce(void) const
{
  std::cout << "<" << this->_name << " (" << this->_type << ")> Miaou..." << std::endl;
}

void	 Zombie::setname(std::string name)
{
  if (!name.empty())
    this->_name = name;
}

void	 Zombie::settype(std::string type)
{
  if (!type.empty())
    this->_type = type;
}
