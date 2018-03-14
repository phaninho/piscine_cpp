#include "Human.hpp"
#include <string>

Human::Human(void)
{
  return ;
}

Human::~Human(void)
{
  return ;
}

std::string   Human::identify(void) const
{
  return (this->brain.identify());
}

Brain const  &Human::getBrain(void) const
{
  Brain const &brainref = this->brain;
  return (brainref);
}
