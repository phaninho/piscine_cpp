#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{

  public:

    Zombie(std::string type);
    ~Zombie(void);

    void	announce(void) const;
    void setname(std::string name);

  private:

    std::string _name;
    std::string _type;
};

#endif
