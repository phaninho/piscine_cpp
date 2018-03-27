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
        this->push(tmp->squadUnit->clone());
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

    if (!tmp)
        return (0);
    else if (i == 0)
        return (tmp->squadUnit);
    while (tmp)
    {
        std::cout << j <<" sur " << i << std::endl;            
        if (i == j)
        {
            std::cout << " ok " << std::endl;            
            return (tmp->squadUnit);
        }
        std::cout << " avant next " << std::endl;            
        tmp = tmp->next;
        std::cout << " apres next " << std::endl;            
        j++;
    }
        std::cout << " sortie " << std::endl;            
    return (0);
}

int Squad::push(ISpaceMarine *squad)
{
    t_squadList *tmp = this->_squad;
    
    if (!squad)
        return (this->_units);
    if (!tmp)
    {
        this->_squad = new t_squadList;
        this->_squad->squadUnit = squad;
        this->_squad->next = 0;
        this->_units = 1;
        return (this->_units);        
    }
    while (tmp->next)
    {               
        if (tmp->squadUnit == squad)
            break ;
        tmp = tmp->next;         
    }         
    tmp->next = new t_squadList;
    tmp = tmp->next;
    tmp->squadUnit = squad;
    // squad->battleCry();
    tmp->next = 0;
    this->_units++;
        
    return (this->_units);
}