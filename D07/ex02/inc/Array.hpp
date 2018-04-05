/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 14:08:07 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 14:36:49 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template< typename T >
class Array {

public:

	Array( void );
	Array( unsigned int );
	Array( Array const & src );
	virtual ~Array();

	Array &operator=( Array const & rhs );
	Array &operator[]( Array const & rhs );

private:

	T				*_array;
	unsigned int	_len;


};
//
// std::ostream &		operator<<( std::ostream & o, Array const & i );

#endif
