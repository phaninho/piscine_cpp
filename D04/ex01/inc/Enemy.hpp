#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
  public:
    Enemy(void);
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & src);
    ~Enemy(void);
    std::string getType() const;
    int getHP() const;
    void setType(std::string type);
    void sethp(int hp);
    Enemy &operator=(Enemy const &rhs);

    virtual void takeDamage(int damage);

  private:
    int _hp;
    std::string _type;
};

#endif
