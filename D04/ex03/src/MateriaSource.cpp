#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _matNb(0)
{
    return ;
}

MateriaSource::MateriaSource(MateriaSource const & src): _matNb(0)
{
    *this = src;
    return ;
}

MateriaSource::~MateriaSource(void)
{
    return ;
}

void MateriaSource::learnMateria(AMateria* mat)
{
    if (this->_matNb < 4 && mat)
    {
        this->_matBook[this->_matNb] = mat;
        this->_matNb++;
    }
    // std::cout << "laaaaa " << this->_matBook[this->_matNb - 1]->getType() << std::endl;

}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    if (this->_matNb == 0)
        return (0);
    for (int i = 0; i < this->_matNb; i++)
    {
        if (this->_matBook[i]->getType() == type)
            return (this->_matBook[i]->clone());
    }
    return (0);
}

MateriaSource &MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}