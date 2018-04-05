/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:25:16 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 14:35:45 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( void ): _array(0), _len(0)
{ }

Array::Array( unsigned int len): _array(new T[len]),  _len(len)
{ }

Array::Array(T const & src)
{
	*this = src;
}

Array::~Array( void )
{ }

Array &Array::operator=( Array const & rhs )
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
