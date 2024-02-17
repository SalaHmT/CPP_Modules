/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:00:39 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 17:20:08 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int     main(void)
{
    ClapTrap    salah("Salah");
    ClapTrap    raven("raven");

    salah.setDamage(4);
    salah.attack(raven.getName());
    salah.attack(raven.getName());
    raven.takeDamage(1);
    raven.beRepaired(100);
    raven.attack(salah.getName());
    salah.takeDamage(1);
    salah.getStatus();
    raven.getStatus();
}