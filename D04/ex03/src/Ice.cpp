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

Ice &Ice::operator=(Ice const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (this);
}
