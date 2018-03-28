#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class StripMiner: public IMiningLaser
{
    public:
        StripMiner(void);
        StripMiner(StripMiner const & src);
        virtual ~StripMiner();
        virtual void mine(IAsteroid*);
        StripMiner &operator=(StripMiner const & rhs);
};

#endif