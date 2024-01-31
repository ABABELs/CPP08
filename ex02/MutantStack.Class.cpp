/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:36:09 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 14:39:38 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.Class.hpp"

MutantStack::MutantStack(void)
{
    return ;
}

MutantStack::MutantStack(MutantStack const & src)
{
    *this = src;
    return ;
}

MutantStack::~MutantStack(void)
{
    return ;
}

MutantStack & MutantStack::operator=(MutantStack const & rhs)
{
    if (this != &rhs)
    {
        this->c = rhs.c;
    }
    return *this;
}

MutantStack::iterator MutantStack::begin(void)
{
    return this->c.begin();
}

MutantStack::iterator MutantStack::end(void)
{
    return this->c.end();
}