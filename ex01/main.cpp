/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:28:23 by aabel             #+#    #+#             */
/*   Updated: 2024/02/15 11:07:47 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.Class.hpp"

int main()
{
    Span sp = Span(10000);
    try
    {
        sp.addMoreNumber(1, 10000);
        // sp.addNumber(1);
        // sp.addNumber(2);
        // sp.addNumber(3);
        // sp.addNumber(4); 
        // sp.addNumber(-5);
        // sp.addNumber(4); // throw
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}