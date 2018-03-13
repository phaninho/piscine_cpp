#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
  public:

    Pony (int age, std::string gender, std::string name, std::string city);
    ~Pony(void);

  private:

    int const _legs;
    int const _age;
    std::string const _gender;
    std::string const _name;
    std::string const _city;
};

#endif
