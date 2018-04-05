/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:28:54 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/04 19:56:16 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertStr.hpp"

ConvertStr::ConvertStr(void)
{ }

ConvertStr::ConvertStr(std::string const & str) :
_nb(str)
{ }

ConvertStr::ConvertStr(ConvertStr const & src)
{
	*this = src;
}

ConvertStr::~ConvertStr()
{ }

ConvertStr &ConvertStr::operator=(ConvertStr const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return *this;
}
#include <iostream>
#include <cmath>

int			ConvertStr::convertToInt()
{
	if (!std::isnan(this->getInInt()))
		std::cout << "noo";
	return (this->getInInt());
}


std::string	ConvertStr::getNb()
{
	return (this->_nb);
}

int 		ConvertStr::getInInt()
{
	return (static_cast<int>(stoi(this->_nb)));
}

char		ConvertStr::getInChar()
{
	return (static_cast<char>(this->getInInt()));
}

float		ConvertStr::getInFloat()
{
	return (static_cast<float>(atof(this->_nb.c_str())));
}

double		ConvertStr::getInDouble()
{
	return (static_cast<double>(atof(this->_nb.c_str())));
}
