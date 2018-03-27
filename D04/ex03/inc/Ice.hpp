#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string const & type);
        Ice(Ice const & src);
        ~Ice(void);
        Ice &operator=(Ice const & src);
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};

#endif