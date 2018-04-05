/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:25:16 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 16:55:31 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array<T>( void ): _array(0), _len(0)
{ }

Array::Array( unsigned int len): _array(new T[len]),  _len(len)
{ }

Array::Array(T const & src)
{
	*this = src;
}

Array::~Array( void )
{
	delete [] this->_array;
}

T	&Array::operator=( Array const & rhs )
{
	if (this != &rhs)
	{
		this->_array = new T[rhs._len]
		for (unsigned int i = 0; i < rhs._len; i++)
			this->_array[i] = rhs._array[i];
		this->_len = rhs._len;
	}
	return *this;
}

T	&Array::operator[]( T array, unsigned int const & rhs )
{
	if (array && rhs < this->_len)
		return this->_array[rhs]
	else
		throw std::exception();
}

unsigned int	size()
{
	return this->_len;
}

std::ostream 	&operator<<( std::ostream & o, T const & array)
