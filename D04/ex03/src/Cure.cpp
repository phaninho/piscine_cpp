#include "Cure.hpp"

Cure::Cure(void)
{
    return ;
}

Cure::Cure(std::string const & type): AMateria("Cure")
{
    return ;
}

Cure::Cure(Cure const & src)
{
    return ;
}

Cure::~Cure(void)
{
    return ;
}

Cure* Cure::clone() const
{
    Cure *clone = new Cure;
    clone = this;
    return (clone);
}


void Cure::use(ICharacter& target)
{
    this->xp_ += 10;
    std::cout << "write something" << std::endl;
}

Cure &Cure::operator=(Cure const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (this);
}
