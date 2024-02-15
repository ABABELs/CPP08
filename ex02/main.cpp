/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:51:27 by aabel             #+#    #+#             */
/*   Updated: 2024/02/15 12:57:50 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.Temp.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of mstack : "<< mstack.top() << std::endl;
	std::cout << "Size of mstack : " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Top of mstack : "<< mstack.top() << std::endl;
	std::cout << "Size of mstack : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(8);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	// std::list<int> stack;
	// stack.push_back(5);
	// stack.push_back(17);
	// std::cout << "Size of mstack : " << stack.size() << std::endl;
	// stack.pop_back();
	// std::cout << "Size of mstack : " << stack.size() << std::endl;

	// stack.push_back(3);
	// stack.push_back(8);
	// stack.push_back(737);
	// stack.push_back(0);

	// std::list<int>::iterator it2 = stack.begin();
	// std::list<int>::iterator ite2 = stack.end();
	// ++it2;
	// --it2;
	// while (it2 != ite2)
	// {
	// 	std::cout << *it2 << std::endl;
	// 	++it2;
	// }
	return (0);
}