/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:24:48 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/09 13:06:56 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieH = new Zombie[N];
    if (!zombieH)
        return (NULL);
    int i = 0;
    while(i < N)
        zombieH[i++].setName(name);
    return(zombieH);
}