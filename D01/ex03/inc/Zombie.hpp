#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{

  public:

    Zombie(void);
    Zombie(std::string type);
    ~Zombie(void);

    void	announce(void) const;
    void  setname(std::string name);
    void	settype(std::string type);

  private:

    std::string _name;
    std::string _type;
};

#endif
