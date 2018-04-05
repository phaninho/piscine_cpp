/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:35:35 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 18:41:40 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char> str(30);

	for (size_t i = 0; i < str.size(); i++)
	{
		std::cout << i << std::endl;

		str[i] = i + '0';
	}
	std::cout << str << std::endl;
	try
	{
		std::cout << str[30] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << str[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
return (0);
	return 0;
}
