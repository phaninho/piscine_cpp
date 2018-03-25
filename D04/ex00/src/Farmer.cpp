#include "Farmer.hpp"

Farmer::Farmer(void): Victim("No Name")
{
  std::cout << "Cot cot." << std::endl;
  return ;
}

Farmer::Farmer(std::string name): Victim(name)
{
  std::cout << "Cot cot." << std::endl;
  return ;
}

Farmer::Farmer(Farmer const & src)
{
  *this = src;
  std::cout << "Cot cot." << std::endl;
  return ;
}

Farmer::~Farmer(void)
{
  std::cout << "Meuuuuh...." << std::endl;
  return ;
}

void Farmer::getPolymorphed(void) const
{
  std::cout << this->_name << " has been turned into a white cow !" <<std::endl;
  return ;
}

Farmer &Farmer::operator=(Farmer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}
