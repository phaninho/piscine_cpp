#include "Peon.hpp"

Peon::Peon(void): Victim("No Name")
{
  std::cout << "Zog zog." << std::endl;
  return ;
}

Peon::Peon(std::string name): Victim(name)
{
  std::cout << "Zog zog." << std::endl;
  return ;
}

Peon::Peon(Peon const & src)
{
  *this = src;
  std::cout << "Zog zog." << std::endl;
  return ;
}

Peon::~Peon(void)
{
  std::cout << "Bleuark..." << std::endl;
  return ;
}

void Peon::getPolymorphed(void) const
{
  std::cout << this->_name << " has been turned into a pink pony !" <<std::endl;
  return ;
}

Peon &Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}
