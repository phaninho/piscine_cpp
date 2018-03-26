#include "Enemy.hpp"

Enemy::Enemy(void)
{
  sethp(0);
  setType("No name");
  return ;
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
  return ;
}

Enemy::Enemy(Enemy const & src)
{
  *this = src;
  return ;
}

Enemy::~Enemy(void)
{
  return ;
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
  if (this != &rhs)
  {
    this->setType(rhs.getType());
    this->sethp(rhs.getHP());
  }
  return (*this);
}

std::string getType(void) const
{
  return (this->_type);
}

int getHP(void) const
{
    return (this->_hp);
}
