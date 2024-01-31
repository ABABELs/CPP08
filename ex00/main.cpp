/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:09:09 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 11:09:49 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.Temp.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    try
    {
        std::cout << easyfind(v, 2) << std::endl;
        std::cout << easyfind(v, 4) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}