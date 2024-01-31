/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.Temp.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:00:10 by aabel             #+#    #+#             */
/*   Updated: 2024/01/31 11:10:41 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TEMP_HPP
# define EASYFIND_TEMP_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

class NotFound : public std::exception
{
    virtual const char* what() const throw()
    {
        return "Not found";
    }
};

template <typename T>
int		easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFound();
    return *it;
}


#endif