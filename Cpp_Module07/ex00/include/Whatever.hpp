/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:44:10 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/13 21:46:16 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >

void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template< typename T >

T min(T a, T b)
{
    return (a < b ? a : b);
}

template< typename T >

T max(T a, T b)
{
    return (a > b ? a : b);
}

#endif