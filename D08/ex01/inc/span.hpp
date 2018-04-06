/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:02:37 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 12:02:13 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

public:

    Span( void );
    Span( unsigned int );
    Span( Span const & src );
    virtual ~Span();

    Span &            operator=( Span const & rhs );

    void	           addNumber( unsigned int );
    // unsigned int       shortestSpan() const;
    // unsigned int       longestSpan() const;
    unsigned int       getIndex() const;

private:

    unsigned int             _size;
    std::vector<int>         _vec;

};


std::ostream &        operator<<( std::ostream & o, Span const & i );



#endif
