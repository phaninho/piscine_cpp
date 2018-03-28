#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* zaz = new Character("zaz");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = src->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    tmp = src->createMateria("cure");
    bob->equip(tmp);

    zaz->use(0, *bob);
    zaz->use(0, *bob);
    zaz->use(0, *bob);
    zaz->use(0, *bob);
    zaz->use(0, *bob);    
    zaz->use(1, *bob);
    zaz->unequip(0);
    zaz->use(0, *bob);
    zaz->use(1, *bob);

    bob->use(0, *zaz);
    bob->use(1, *zaz);
    bob->unequip(1);
    bob->use(0, *zaz);
    bob->use(1, *zaz);

    delete bob;
    delete zaz;
    delete src;
    return 0;
}