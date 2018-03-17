#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int const Fixed::_frac_bit = 8;

Fixed::Fixed(void)
{
  std::cout << "Default constructor called" << std::endl;
  this->setRawBits(0);
  return ;
}

Fixed::Fixed(int const nb): _point_value(nb << Fixed::_frac_bit)
{
  std::cout << "Int constructor called" << std::endl;
  return ;
}

Fixed::Fixed(float const nb): _point_value(nb * (1 << Fixed::_frac_bit))
{
  std::cout<< nb << " " << (1 << _frac_bit) <<  " " << roundf(nb * (1 << _frac_bit)) << " Float constructor called" << std::endl;
  return ;
}

Fixed::Fixed(Fixed &org)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = org;
  return ;
}

Fixed::~Fixed(void)
{
  std::cout << "Destructor called" << std::endl;
  return ;
}

int   Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_point_value);
}

Fixed  &Fixed::operator=( Fixed const & rhs)
{
  std::cout << "Assignation operator called" << std::endl;
  this->_point_value = rhs.getRawBits();
  return (*this);
}

void   Fixed::setRawBits( int const raw )
{
  this->_point_value = raw;
}

float  Fixed::toFloat( void ) const
{
  return ((float)this->_point_value);
}

int    Fixed::toInt( void ) const
{
  return (this->_point_value >> _frac_bit);
}
