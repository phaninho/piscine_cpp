/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 18:51:53 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 18:53:27 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template< typename T >
class easyfind<T, int> {

public:

	easyfind( void );
	easyfind( std::string const & name );
	easyfind( easyfind const & src );
	virtual ~easyfind();

	easyfind &operator=( easyfind const & rhs );

private:

	/* data */

};


std::ostream &		operator<<( std::ostream & o, easyfind const & i );



#endif
