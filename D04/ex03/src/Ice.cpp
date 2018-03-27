#include "Ice.hpp"

Ice::Ice(void)
{
    return ;
}

Ice::Ice(std::string const & type): AMateria("ice")
{
    return ;
}

Ice::Ice(Ice const & src)
{
    return ;
}

Ice::~Ice(void)
{
    return ;
}

Ice* Ice::clone() const
{
    Ice *clone = new Ice;
    clone = this;
    return (clone);
}

void Ice::use(ICharacter& target)
{
    this->xp_ += 10;
    std::cout << "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
