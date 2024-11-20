/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:47:22 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/24 13:56:29 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T, int N>
int easyfind(T container)
{
    typename T::iterator it = std::find(container.begin(), container.end(), N);
    if (it == container.end())
        throw "is out of range !";
    return (*it);
}
#endif