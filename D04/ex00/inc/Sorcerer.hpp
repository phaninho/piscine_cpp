#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer
{
  public:
    Sorcerer(Sorcerer const & src);
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    Sorcerer &operator=(Sorcerer const & rhs);

  private:
    std::string _name;
    std::string _title;
};

#endif
