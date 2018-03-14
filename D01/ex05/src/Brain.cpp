#include "Brain.hpp"
#include <string>
#include <sstream>

Brain::Brain(void)
{
  return ;
}

Brain::~Brain(void)
{
  return ;
}

std::string   Brain::identify(void) const
{
  std::ostringstream oss;

  oss << this;
  return (oss.str());
}
