#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void): xp_(0), _type("No type")
{
    return ;
}

AMateria::AMateria(AMateria const & src)
{ 
    *this = src;
    return ;
}

AMateria::AMateria(std::string const & type): xp_(0), _type(type)
{
    return ;
}

AMateria::~AMateria()
{
    return ;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

unsigned int AMateria::getXP() const
{
    return (this->xp_);
}

AMateria &AMateria::operator=(AMateria const & rhs)
{
    if (this != &rhs)
        *this = src;
    return (*this);
}
