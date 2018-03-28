#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const & src);
        ~MateriaSource(void);
        MateriaSource &operator=(MateriaSource const & rhs);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
    private:
        AMateria *_matBook[4];
        int _matNb;
};

#endif