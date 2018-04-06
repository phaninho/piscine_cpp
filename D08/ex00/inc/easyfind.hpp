/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 18:51:53 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 02:31:58 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <deque>

template< typename T >

int		easyfind(T & cont, int nb)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), nb);

	if (it == cont.end())
		throw std::invalid_argument(" aucune occurence");
	else
		return *it;
}

#endif
