#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human
{
  public:

    Human(void);
    ~Human(void);
    std::string   identify(void) const;
    Brain const   &getBrain(void) const;
    Brain const   brain;
};

#endif
