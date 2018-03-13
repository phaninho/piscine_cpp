#include "Pony.hpp"
#include <iostream>

Pony::Pony(int age, std::string gender, std::string name) : _legs(4),
                                                            _age(age),
                                                            _gender(gender),
                                                            _name(name)
{
  return ;
}

~Pony(void)
{
  std::cout << this->_name << " is dead!" << std::endl;
  return ;
}
