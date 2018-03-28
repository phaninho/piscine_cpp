#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
    return ;
}

Ice::Ice(Ice const & src)
{
    *this = src;
    return ;
}

Ice::~Ice(void)
{
    return ;
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    unsigned int xp = this->getXP();
    this->setXP(xp + 10);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->showMateriaXP();
}

Ice &Ice::operator=(Ice const & rhs)
{
    if (this != &rhs)
    {
        this->setXP(rhs.getXP());
        this->setType(rhs.getType());
    }
    return (*this);
}
