/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.Temp.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:30:36 by aabel             #+#    #+#             */
/*   Updated: 2024/02/01 12:16:20 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TEMP_HPP
# define MUTANTSTACK_TEMP_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <exception>
# include <cstdlib>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(void)
        {
            return ;
        }

        MutantStack(MutantStack const & src)
        {
            *this = src;
            return ;
        }
        
        ~MutantStack(void)
        {
            return ;
        }
        
        MutantStack & operator=(MutantStack const & rhs)
        {
            if (this != &rhs)
                std::stack<T, Container>::operator=(rhs);
            return (*this);
        
        }
        
        typedef std::stack<int>::container_type::iterator iterator;
        typedef std::stack<int>::container_type::const_iterator const_iterator;
        
        iterator begin(void)
        {
            return this->c.begin();
        }
        
        iterator end(void)
        {
            return this->c.end();
        }
    private:
        std::stack<T, Container> _stack;
};
#endif