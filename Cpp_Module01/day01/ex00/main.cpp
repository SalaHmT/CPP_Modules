/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:21:24 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/07 10:53:12 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

int		main(void)
{
	Zombie *zombie = newZombie("raven");
	zombie->announce();
	delete zombie;
	randomChump("salah");
	return (0);
}