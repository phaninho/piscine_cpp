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

Fixed::Fixed(int const nb)
{
  setRawBits(nb << _frac_bit);
  std::cout << "Int constructor called" << std::endl;
  return ;
}

Fixed::Fixed(float const nb)
{
  setRawBits(roundf(nb * (1 << _frac_bit)));
  std::cout << "Float constructor called" << std::endl;
  return ;
}

Fixed::Fixed(Fixed const &orig)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = orig;
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
  this->_point_value = rhs._point_value;
  return (*this);
}

Fixed &Fixed::operator>( Fixed const & rhs)
{
  return (this->_point_value > rhs.getRawBits());
}

Fixed &Fixed::operator>=( Fixed const & rhs)
{
  return (this->_point_value >= rhs.getRawBits());
}

Fixed &Fixed::operator<( Fixed const & rhs)
{
  return (this->_point_value < rhs.getRawBits());
}

Fixed &Fixed::operator<=( Fixed const & rhs)
{
  return (this->_point_value <= rhs.getRawBits());
}

Fixed &Fixed::operator==( Fixed const & rhs)
{
  return (this->_point_value == rhs.getRawBits());
}

Fixed &Fixed::operator!=( Fixed const & rhs)
{
  return (this->_point_value != rhs.getRawBits());
}

Fixed &Fixed::operator+( Fixed const & rhs)
{
  Fixed rsl;

  rsl.setRawBits(this->_point_value + rhs._point_value);
  return (rsl);
}

Fixed &Fixed::operator-( Fixed const & rhs)
{
  Fixed rsl;

  rsl.setRawBits(this->_point_value - rhs._point_value);
  return (rsl);
}

void   Fixed::setRawBits( int const raw )
{
  this->_point_value = raw;
}

float  Fixed::toFloat( void ) const
{
  float	nb;

	nb = getRawBits();
	return (nb / (1 << this->_frac_bit));
}

int    Fixed::toInt( void ) const
{
  return (this->_point_value >> _frac_bit);
}

std::ostream  &operator<<(std::ostream & o, Fixed const & rhs)
{
  o << rhs.toFloat();
  return o;
}
