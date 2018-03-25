#include "Victim.hpp"

Victim::Victim(void): _name("No Name")
{
  std::cout << "Some random victim called " << this->_name << " just popped !" <<std::endl;
  return ;
}

Victim::Victim(std::string name): _name(name)
{
  std::cout << "Some random victim called " << this->_name << " just popped !" <<std::endl;
  return ;
}

Victim::Victim(Victim const & src)
{
  *this = src;
  std::cout << "Some random victim called " << this->_name << " just popped !" <<std::endl;
  return ;
}

Victim::~Victim(void)
{
  std::cout << "Victim " << this->_name << " just died for no apparent reason !" <<std::endl;
  return ;
}

void Victim::introduce(void) const
{
  std::cout << *this << std::endl;
}

void Victim::getPolymorphed() const
{
  std::cout << this->_name << " has been turned into a cute little sheep !" <<std::endl;
}

std::string const Victim::getname(void) const
{
  return (this->_name);
}

Victim &Victim::operator=(Victim const & rhs)
{
  if (this != &rhs)
    *this = rhs;
  return (*this);
}

std::ostream  &operator<<(std::ostream & o, Victim const & rhs)
{
  o << "I'm " << rhs.getname() << " and I like otters !" << std::endl;
  return (o);
}
