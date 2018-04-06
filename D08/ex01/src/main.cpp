/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:11:43 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 16:21:35 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);

    try
    {
        std::cout << "*** test 1 ***" << std::endl;
        std::cout << "declare un vector de 5 on lui ajoute des elements" << std::endl;
        sp.addNumber(1);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(-1);
        sp.addNumber(11);
        std::cout << "On essai d'ajouter des elements apres depassement de la limite allouée au vector" << std::endl;

        sp.addNumber(94);
        sp.addNumber(114);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::length_error & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(std::logic_error & e)
    {
        std::cout << e.what() << std::endl;
    }

    Span sp2 = Span(5);

    try
    {
        std::cout << std::endl << "*** test 2 ***" << std::endl;
        std::cout << "declare un vector de 5 on lui ajoute des elements" << std::endl;
        sp2.addNumber(1);
        std::cout << "On fait une recherche de span vector avec 1 elements" << std::endl;

        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(std::length_error & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(std::logic_error & e)
    {
        std::cout << e.what() << std::endl;
    }

    Span sp3 = Span(5);

    try
    {
        std::cout << std::endl << "*** test 3 ***" << std::endl;
        std::cout << "declare un vector de 5 on lui ajoute des elements" << std::endl;
        sp3.addNumber(1);
        sp3.addNumber(3);
        sp3.addNumber(17);
        sp3.addNumber(-1);
        sp3.addNumber(11);
        std::cout << "shortest span " << sp3.shortestSpan() << std::endl;
        std::cout << "longets span " << sp3.longestSpan() << std::endl;
    }
    catch(std::length_error & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(std::logic_error & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "*** test 4 ***" << std::endl;
    std::cout << "ajout d'un tableau de int au vector existant" << std::endl;
    int nb[6] = {102, 88, 4, 5, 84, 6};
    sp3.addNumber(nb, sizeof(nb) / sizeof(int));
    std::cout << "shortest span " << sp3.shortestSpan() << std::endl;
    std::cout << "longets span " << sp3.longestSpan() << std::endl;


    srand(time(0));

    Span sp4 = Span(10000);

    std::cout << std::endl << "*** test 5 ***" << std::endl;
    std::cout << "tableau de 10000 elements" << std::endl;

    try
    {
        for (int i(0); i < 10000; i++)
            sp4.addNumber(rand() % 10000000);
        std::cout << "shortest span " << sp4.shortestSpan() << std::endl;
        std::cout << "longets span " << sp4.longestSpan() << std::endl;
    }
    catch(std::length_error & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(std::logic_error & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
