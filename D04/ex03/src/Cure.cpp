#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
    return ;
}

Cure::Cure(Cure const & src)
{
    *this = src;
    return ;
}

Cure::~Cure(void)
{
    return ;
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    unsigned int xp = this->getXP();
    this->setXP(xp + 10);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const & rhs)
{
    if (this != &rhs)
    {
        this->setXP(rhs.getXP());
        this->setType(rhs.getType());
    }
    return (*this);
}
