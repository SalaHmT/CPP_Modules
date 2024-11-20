/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:44:59 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/13 23:28:40 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename TA, typename TF >

void iter(TA *array, unsigned int length, TF function)
{
    if (!array || !function)
        throw "Error Invalid array or function";
    for (unsigned int i = 0; i < length; i++)
        function(array[i]);
}
template< typename T>

void printV2(T x)
{
    std::cout << x << std::endl;
}
#endif