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

std::string Enemy::getType(void) const
{
  return (this->_type);
}

int Enemy::getHP(void) const
{
    return (this->_hp);
}

void Enemy::setType(std::string type)
{
  this->_type = type;
  return ;
}

void Enemy::sethp(int hp)
{
  this->_hp = hp;
  return ;
}

void Enemy::takeDamage(int damage)
{
  int hp = this->getHP();

  if (hp < 0)
    return ;
  else if (hp - damage < 0)
    this->sethp(0);
  else
    this->sethp(hp - damage);
  return ;
}
