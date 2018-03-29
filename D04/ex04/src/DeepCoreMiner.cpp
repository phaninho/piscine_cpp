#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{
    return;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src)
{
    *this = src;
    return ;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
    return ;
}

void DeepCoreMiner::mine(IAsteroid *ast)
{
    std::cout << "* mining deep ... got " << ast->beMined() << " ! *" << std::endl;
}


DeepCoreMiner &DeepCoreMiner::operator=(DeepCoreMiner const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return ;
}