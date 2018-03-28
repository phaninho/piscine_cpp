#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{
    return;
}

StripMiner::StripMiner(StripMiner const & src)
{
    *this = src;
    return ;
}

StripMiner::~StripMiner(void)
{
    return ;
}

void StripMiner::mine(IAsteroid *ast)
{
    std::cout << "* strip mining ... got " << ast->beMined() << " ! *" << std::endl;
}


StripMiner &StripMiner::operator=(StripMiner const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return ;
}