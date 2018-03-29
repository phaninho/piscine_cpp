#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal(void): _name("No name")
{
    return ;
}

AsteroBocal::AsteroBocal(std::string name): _name(name)
{
    return ;
}

AsteroBocal::AsteroBocal(AsteroBocal const & src)
{
    *this = src;
    return ;
}

AsteroBocal::~AsteroBocal(void)
{
    return ;
}

std::string AsteroBocal::getName(void) const
{
    return (this->_name);
}

AsteroBocal &AsteroBocal::operator=(AsteroBocal const & rhs)
{
    if (this != &rhs)
        this->_name = rhs._name;
    return (*this);
}

std::string AsteroBocal::beMined(StripMiner *src) const
{
    return ("Flavium");
}

std::string AsteroBocal::beMined(DeepCoreMiner *src) const
{

}