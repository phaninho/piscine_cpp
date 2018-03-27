#include "Squad.hpp"

Squad::Squad(void): _units(0), _squad(NULL)
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
    return ;
}

Squad &Squad::operator=(Squad const & rhs)
{
    if (this != &rhs)
    {
        this->_units = rhs.getCount();
        // this->_squad = rhs.getUnit(0);
    }
}

int Squad::getCount() const
{

}

ISpaceMarine* Squad::getUnit(int i)
{

}

int Squad::push(ISpaceMarine *squad)
{
    int i = 0;
    if (!squad)
        return (this->_units);
    ISpaceMarine *tmp = this->_squad;
    if (!tmp)
    {
        this->_squad = new t_squadList;
        this->_squad->squadList = squad;
        this->_squad->next = NULL;
        this->_units = 1;
        return (this->_units);        
    }
    while (tmp)
    {
        if (tmp->squadList == squad)
        {
            i = -1;
            break ;
        }
        tmp = tmp->next;
        i++;
        if (!tmp)
        {
            tmp->next = new t_squadList;
            tmp = tmp->next;
            tmp->squadList = squad;
            tmp->next = NULL;
            this->_units = i;
            break ;
        }
    }
    if (i == -1)
        i = this->_units;
    else
        this->_units = i;
    return (i);
}