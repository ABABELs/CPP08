/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:30:36 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 14:57:22 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <exception>
# include <cstdlib>
# include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(void);
        MutantStack(MutantStack const & src);
        ~MutantStack(void);
        MutantStack & operator=(MutantStack const & rhs);
        typedef std::stack<int>::container_type::iterator iterator;
        Container::iterator begin(void);
        Container::iterator end(void);
    private:
};
#endif