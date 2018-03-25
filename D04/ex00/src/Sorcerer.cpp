#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void): _name("No Name"), _title("No Title")
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

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

void Sorcerer::introduce(void) const
{
  std::cout << *this;
  return ;
}

void Sorcerer::polymorph(Victim const & target) const
{
  target.getPolymorphed();
  return ;
}

std::string const Sorcerer::getname(void) const
{
  return (this->_name);
}

std::string const Sorcerer::gettitle(void) const
{
  return (this->_title);
}

Sorcerer &Sorcerer::operator=(Sorcerer const & rhs)
{
  if (this != &rhs)
    *this = rhs;
  return (*this);
}

std::ostream  &operator<<(std::ostream & o, Sorcerer const & rhs)
{
  o << "I am " << rhs.getname() << ", " << rhs.gettitle() << ", and I like ponies !";
  return (o);
}
