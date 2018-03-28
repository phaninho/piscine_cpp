#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    public:
        Character(void);
        Character(std::string name);
        Character(Character const & src);
        ~Character(void);
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

        virtual std::string const & getName() const;
        AMateria *getMateriaBox(int i) const;
        int getMateriaNb(void) const;
        void init(AMateria **box);

        Character &operator=(Character const & rhs);

    private:
        std::string _name;
        AMateria *_materiaBox[4];
        int _materiaNb;
};

#endif