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
    std::string const getname(void) const;
    std::string const gettitle(void) const;

  private:
    std::string _name;
    std::string _title;
};

std::ostream  &operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
