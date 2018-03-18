#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
  public:
    Fixed(void);
    Fixed(int const nb);
    Fixed(float const nb);
    Fixed(Fixed const &f);
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int   toInt( void ) const;
    bool operator>( Fixed const & rhs);
    bool operator<( Fixed const & rhs);
    bool operator>=( Fixed const & rhs);
    bool operator<=( Fixed const & rhs);
    bool operator==( Fixed const & rhs);
    bool operator!=( Fixed const & rhs);
    Fixed operator+( Fixed const & rhs);
    Fixed operator-( Fixed const & rhs);
    Fixed operator*( Fixed const & rhs);
    Fixed operator/( Fixed const & rhs);
    Fixed &operator=( Fixed const & rhs);
    Fixed &operator++(void);
    Fixed operator++(int);
    static Fixed min(Fixed & lhs, Fixed & rhs);
    static Fixed max(Fixed & lhs, Fixed & rhs);
    static Fixed const min(Fixed const & lhs, Fixed const & rhs);
    static Fixed const max(Fixed const & lhs, Fixed const & rhs);

  private:
    int _point_value;
    static int const _frac_bit;
};

std::ostream  &operator<<(std::ostream & o, Fixed const & rhs);


#endif
