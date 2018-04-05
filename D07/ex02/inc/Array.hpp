/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:08:07 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 18:42:20 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array{

public:

	Array<T>( void ): _array(0), _len(0)
	{ }

	Array<T>( unsigned int len): _array(new T[len]),  _len(len)
	{ }

	Array<T>( Array const & src )
	{
		*this = src;
	}

	virtual ~Array<T>()
	{
		delete [] this->_array;
	}

	Array<T> &operator=( Array<T> const & rhs )
	{
		if (this != &rhs)
		{
			this->_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				this->_array[i] = rhs._array[i];
			this->_len = rhs._len;
		}
		return *this;
	}

	T	&operator[](unsigned int const & rhs )
	{
		if (this->_array && rhs < this->_len)
			return this->_array[rhs];
		else
			throw std::exception();
	}

	unsigned int size()
	{
		return this->_len;
	}

	Array<T> *array()
	{
		return this->_array;
	}

private:

	T				*_array;
	unsigned int	_len;


};
template< typename T >
std::ostream &		operator<<( std::ostream & o, Array<T>  & rhs)
{
	// std::cout << rhs.size() << std::endl;

	for (unsigned int i = 0; i < rhs.size(); i++)
		o <<  const_cast< Array<T> &>(rhs)[i] << " ";
	return o;
}

#endif
