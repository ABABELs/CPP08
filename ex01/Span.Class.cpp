/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:22:36 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 14:15:46 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.Class.hpp"

Span::Span(unsigned int n) : _n(n)
{
    return ;
}

Span::Span(Span const & src)
{
    *this = src;
    return ;
}

Span::~Span(void)
{
    return ;
}

Span & Span::operator=(Span const & rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_v = rhs._v;
    }
    return *this;
}

void Span::addNumber(int nb)
{
    for (unsigned int i = 0; i < this->_v.size(); i++)
        if (this->_v[i] == nb)
            throw ExistBefore();
    if (this->_v.size() >= _n)
        throw BigerThanSize();
    else
        this->_v.push_back(nb);
}

int Span::shortestSpan(void)
{
    if (this->_v.size() < 2)
        throw NotFound();
    std::sort(this->_v.begin(), this->_v.end());
    int min = this->_v[1] - this->_v[0];
    for (unsigned int i = 2; i < this->_v.size(); i++)
    {
        if (this->_v[i] - this->_v[i - 1] < min)
            min = this->_v[i] - this->_v[i - 1];
    }
    return min;
}

int Span::longestSpan(void)
{
    if (this->_v.size() < 2)
        throw NotFound();
    std::sort(this->_v.begin(), this->_v.end());
    return this->_v[this->_v.size() - 1] - this->_v[0];
}

Span & Span::operator<<(int n)
{
    if (this->_v.size() >= this->_n)
        throw ExistBefore();
    this->_v.push_back(n);
    return *this;
}

void Span::addMoreNumber(int n1, int n2)
{
    if (n1 > n2)
        std::swap(n1, n2);
    for (int i = n1; i <= n2; i++)
        this->addNumber(i);  
}