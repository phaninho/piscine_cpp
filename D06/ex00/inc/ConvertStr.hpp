/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:27:56 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/04 19:37:22 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTSTR_HPP
#define CONVERTSTR_HPP

#include <string>

class ConvertStr {

public:

	ConvertStr( void );
	ConvertStr( std::string const & name );
	ConvertStr( ConvertStr const & src );
	virtual ~ConvertStr();

	ConvertStr &operator=( ConvertStr const & rhs );

	int				convertToInt();
	char			convertToChar();
	float			convertToFloat();
	double			convertToDouble();

	std::string	getNb();
	int 		getInInt();
	char		getInChar();
	float		getInFloat();
	double		getInDouble();

private:

	std::string _nb;

};

// std::ostream &		operator<<( std::ostream & o, ConvertStr const & i );

#endif
