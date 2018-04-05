/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 09:34:55 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/05 11:30:35 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void	iter(T *ptr, size_t len, void (*f)(T &))
{
    for (size_t i = 0; i < len; i++)
        f(ptr[i]);
}

template<typename T>
void	rot2(T &ptr)
{
    ptr += 2;
}

int     main( void )
{
    int str[] = {12, 24, 54};
    iter(str, 3, &rot2);
    for (int i = 0; i < 3; i++)
        std::cout << str[i] << std::endl;
    std::string str2 = "hello";
    iter(const_cast<char *>(str2.c_str()), str2.length(), &rot2);
        std::cout << str2 << std::endl;
    return 0;
}
