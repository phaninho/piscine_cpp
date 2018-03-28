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

void AMateria::use(ICharacter& target)
{
    this->xp_ += 10;
    std::cout << target.getName() << " attacked with " << this->_type << " materia !" << std::endl; 
    return ;
}

void AMateria::setXP(unsigned int xp)
{
    this->xp_ = xp;
    return ;
}

void AMateria::setType(std::string type)
{
    this->_type = type;
    return ;
}

AMateria &AMateria::operator=(AMateria const & rhs)
{
    if (this != &rhs)
    {
        this->xp_ = rhs.xp_;
        this->_type = rhs._type;
    }
    return (*this);
}
