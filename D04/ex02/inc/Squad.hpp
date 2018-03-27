#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
    typedef struct s_squadList
    {
        ISpaceMarine *squadUnit;
        struct s_squadList *next;
    }               t_squadList;
    
    public:
        Squad(void);
        Squad(Squad const & src);
        virtual ~Squad(void);
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int);
        virtual int push(ISpaceMarine*);

        Squad &operator=(Squad const & rhs);

    private:
        int _units;
        t_squadList *_squad;
};

#endif