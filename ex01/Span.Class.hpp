/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:15:15 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 14:15:10 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <exception>
# include <cstdlib>

class Span
{
    public:
        class ExistBefore : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Already exist";
            }
        };
        
        class NotFound : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Not found";
            }
        };

        class BigerThanSize : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Max size of vector";
            }
        };
        Span(unsigned int n);
        Span(Span const & src);
        ~Span(void);
        Span & operator=(Span const & rhs);
        int shortestSpan(void);
        int longestSpan(void);
        void addNumber(int nb);
        Span & operator<<(int n);
        void addMoreNumber(int min, int max);
    private:
        Span(void);
        unsigned int _n;
        std::vector<int> _v;
};

#endif
