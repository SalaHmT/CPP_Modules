/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:00:39 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 01:09:37 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int     main(void)
{
    ClapTrap    salah("Salah");
    ClapTrap    raven("raven");

    salah.setDamage(2);
    salah.attack(raven.getName());
    salah.attack(raven.getName());
    raven.takeDamage(20);
    raven.beRepaired(100);
    raven.attack(salah.getName());
    salah.takeDamage(15);
    raven.getStatus();
    salah.getStatus();
}