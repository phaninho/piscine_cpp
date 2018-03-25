#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
  public:
    Victim(void);
    Victim(std::string name);
    Victim(Victim const & src);
    virtual ~Victim(void);
    Victim &operator=(Victim const & rhs);
    std::string const getname(void) const;
    void introduce(void) const;
    virtual void getPolymorphed() const;

  protected:
    std::string _name;
};

std::ostream  &operator<<(std::ostream & o, Victim const & rhs);

#endif
