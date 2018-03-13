#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
  public:

    Pony (int age, std::string gender, std::string name);
    ~Pony(void);

  private:

    int _legs;
    int _age;
    std::string _gender;
    std::string _name;
};

#endif
