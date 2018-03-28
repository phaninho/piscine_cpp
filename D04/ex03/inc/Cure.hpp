#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const & src);
        ~Cure(void);
        Cure &operator=(Cure const & rhs);
        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};

#endif