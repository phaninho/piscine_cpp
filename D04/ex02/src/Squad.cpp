#include "Squad.hpp"
#include <iostream>
Squad::Squad(void): _units(0), _squad(0)
{
    return ;
}

Squad::Squad(Squad const & src)
{
    *this = src;
    return ;
}

Squad::~Squad(void)
{
    t_squadList *tmp = this->_squad;
    t_squadList *next = tmp->next;
    
     while (next)
    {
        next = tmp->next;
        delete tmp->squadUnit;
        delete tmp;
        tmp = next;
    }
    return ;
}

Squad &Squad::operator=(Squad const & rhs)
{
    t_squadList *tmp = this->_squad;
    t_squadList *next = tmp->next;

    while (next)
    {
        next = tmp->next;        
        delete tmp->squadUnit;
        delete tmp;
        tmp = next;
    }
    this->_squad = 0;
    tmp = rhs._squad;
    while (tmp)
    {
        this->push(tmp->squadUnit);
        tmp = tmp->next;
    }
    return (*this);
}

int Squad::getCount() const
{
    return (this->_units);
}

ISpaceMarine* Squad::getUnit(int i)
{
    t_squadList *tmp = this->_squad;
    int j = 0;
    // std::cout << i << std::endl;            
    if (!tmp)
        return (0);
    else if (i == 0)
        return (tmp->squadUnit);
    while (j < i)
    {        
            // std::cout << j << " sur " << i << std::endl;                        
        if (tmp)
        {
            // std::cout << "ici" << std::endl;
            if (tmp->next)                        
                tmp = tmp->next;
        }
        else
            return (0);
        j++;

    }
    if (i == j && tmp)
    {
        std::cout << "ok" << std::endl;                        
        return (tmp->squadUnit);
    }
                // std::cout << i << std::endl;                        

    return (0);
}

int Squad::push(ISpaceMarine *squad)
{
    int i = 0;
    if (!squad)
        return (this->_units);
    t_squadList *tmp = this->_squad;
    if (!tmp)
    {
        this->_squad = new t_squadList;
        this->_squad->squadUnit = squad;
        this->_squad->next = 0;
        this->_units = 1;
        return (this->_units);        
    }
    while (tmp)
    {
        i++;                
        if (tmp->squadUnit == squad)
        {
            i = -1;
            break ;
        }
        tmp = tmp->next;
        if (!tmp)
        {            
            tmp = new t_squadList;
            tmp->squadUnit = squad;
            tmp->next = 0;
            i++;
            break ;
        }                
    }    
    if (i == -1)
        i = this->_units;
    else
        this->_units = i;
    return (i);
}