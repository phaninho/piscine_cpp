#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
    *this = src;
    return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back ..." << std::endl;    
    return ;
}

ISpaceMarine* AssaultTerminator::clone(void) const
{
    ISpaceMarine *clone = new AssaultTerminator;
    // clone = this;
    return (clone);
}

void AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
    return ;
}

void AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
