#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
  std::cout << this->_name << ", " << this->_title << ", is born !" <<std::endl;
  return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
  *this = src;
  std::cout << this->_name << ", " << this->_title << ", is born !" <<std::endl;
  return ;
}

Sorcerer::~Sorcerer(void)
{
  std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" <<std::endl;
  return ;
}

Sorcerer &Sorcerer::operator=(Sorcerer const & rhs)
{
  if (this != &rhs)
    *this = rhs;
  return (*this);
}
