/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:01:51 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/11 11:55:22 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int main()
{
	int i = 0;
	int nbr = 7;

	Zombie *zombieH = zombieHorde(nbr,"Gooo");
	while (i < nbr)
		zombieH[i++].announce();
	delete[] zombieH;
}
