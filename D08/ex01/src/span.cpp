/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmartin <stmartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:16:01 by stmartin          #+#    #+#             */
/*   Updated: 2018/04/06 16:06:41 by stmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) :
_size(0)
{ }

Span::Span(unsigned int n) :
_size(n)
{ }

Span::Span( Span const & src)
{
    *this = src;
}

Span::~Span( void )
{ }

Span &           Span::operator=( Span const & rhs )
{
    if (this != &rhs)
        this->_vec = rhs._vec;
    return (*this);
}

void	         Span::addNumber( int n )
{

    if (this->_vec.size() < this->_size)
        this->_vec.push_back(n);
    else
        throw std::length_error("Store capacity is full !");
}

void	         Span::addNumber( int * n , int size)
{
    (void)n;
    this->_size += size;
    // std::cout << " length " << _vec.size() << std::endl;
    // this->_vec.resize(size);
    // std::cout << " length " << _vec.size() << std::endl;
    for (int i(0); i < size; i++)
    {
        _vec.push_back(*n);
        n++;
    }
    // if (this->_vec.size() < this->_size)
    //     this->_vec.push_back(n);
    // else
    //     throw std::length_error("Store capacity is full !");
}

int     Span::shortestSpan()
{
    int min_span;

    if (this->_size < 2)
        throw std::logic_error("no span to find !");
    else
    {
        int ind;
        int ind2;
        int span;

        // std::cout << "size "<< _size << std::endl;

        if (this->_vec.size() < 2)
            throw std::logic_error("No span to find !");
        for (std::vector<int>::iterator it = this->_vec.begin(); it < this->_vec.end(); it++)
        {
            ind = (it - this->_vec.begin());
            for (std::vector<int>::iterator it2 = this->_vec.begin() + ind; it2 < this->_vec.end(); it2++)
            {
                ind2 = (it2 - this->_vec.begin());
                if (ind == ind2 && it2 + 1 < this->_vec.end())
                {
                    it2++;
                    ind2 = (it2 - this->_vec.begin());
                }
                else if (it2 + 1 == this->_vec.end())
                    break ;
                if (ind == 0 && ind2 == 1)
                    min_span = (*it - *it2) < 0 ? (*it - *it2) * -1 : (*it - *it2);
                else
                {
                    span = (*it - *it2) < 0 ? (*it - *it2) * -1 : (*it - *it2);
                    if (span < min_span)
                        min_span = span;
                }
            }
        }
    }
    return (min_span);
}

int     Span::longestSpan() const
{
    if (this->_vec.size() < 2)
        throw std::logic_error("No span to find !");
    else
        return *(std::max_element(this->_vec.cbegin(), this->_vec.end())) - *(std::min_element(this->_vec.cbegin(), this->_vec.end()));
}
