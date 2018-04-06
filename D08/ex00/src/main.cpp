/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 01:45:11 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 02:32:37 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int     main()
{
    std::cout << "*** list ***" << std::endl;

    std::list<int> lst;

    lst.push_back(2);
    lst.push_back(4);
    lst.push_back(23);
    lst.push_back(22);
    lst.push_back(72);
    lst.push_back(5);
    lst.push_back(45);
    lst.push_back(42);

    try
    {
        std::cout << "1: on cherche 732" << std::endl;
        std::cout << easyfind(lst, 732) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }
    try
    {
        std::cout << "2: on cherche 22" << std::endl;
        std::cout << " " << easyfind(lst, 22) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }

    std::cout << std::endl << "*** vector ***" << std::endl;

    std::vector<int> lst1;

    lst1.push_back(2);
    lst1.push_back(4);
    lst1.push_back(23);
    lst1.push_back(22);
    lst1.push_back(72);
    lst1.push_back(5);
    lst1.push_back(45);
    lst1.push_back(42);

    try
    {
        std::cout << "3: on cherche 732" << std::endl;
        std::cout << easyfind(lst1, 732) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }
    try
    {
        std::cout << "4: on cherche 42" << std::endl;
        std::cout << " " << easyfind(lst1, 22) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }

    std::cout << std::endl << "*** deque ***" << std::endl;

    std::deque<int> lst2;

    lst2.push_back(2);
    lst2.push_back(4);
    lst2.push_back(23);
    lst2.push_back(22);
    lst2.push_back(72);
    lst2.push_back(5);
    lst2.push_back(45);
    lst2.push_back(42);

    try
    {
        std::cout << "5: on cherche 732" << std::endl;
        std::cout << easyfind(lst2, 732) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }
    try
    {
        std::cout << "6: on cherche 5" << std::endl;
        std::cout << " " << easyfind(lst2, 5) << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cout << e.what() <<  " n'a ete trouvé !" << std::endl;
    }
    return 0;
}
