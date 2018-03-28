#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class DeepCoreMiner: public IMiningLaser
{
    public:
        DeepCoreMiner(void);
        DeepCoreMiner(DeepCoreMiner const & src);
        virtual ~DeepCoreMiner();
        virtual void mine(IAsteroid*);
        DeepCoreMiner &operator=(DeepCoreMiner const & rhs);
};

#endif