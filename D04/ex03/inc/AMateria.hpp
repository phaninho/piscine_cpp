#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class AMateria
{
    private:
        unsigned int xp_;
        std::string _type;

    public:
        AMateria(void);    
        AMateria(AMateria const & src);
        AMateria(std::string const & type);
        ~AMateria();
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        AMateria &operator=(AMateria const & rhs);
};

#endif