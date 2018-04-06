/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:16:01 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 12:03:26 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) :
_size(0)
{ }

Span::Span(unsigned int n) :
_size(n)
{ }

Span::Span( Span const & src)
{
    *this = src;
}

Span::~Span( void )
{ }

Span &           Span::operator=( Span const & rhs )
{
    if (this != &rhs)
        this->_vec = rhs._vec;
    return (*this);
}

void	         Span::addNumber( unsigned int n)
{
    if (_vec.size() < this->_size)
        this->_vec.push_back(n);
    else
        throw std::length_error("Store capacity is full !");
        // std::cout << "size " << _vec.size() << " cap " << _vec.capacity() << std::endl;

}
