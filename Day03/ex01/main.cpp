/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:05:50 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 13:18:13 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"


int     main(void)
{
    ClapTrap                     salah("salah");
    ScavTrap                     raven("raven");

    salah.setDamage(2);
    salah.attack(raven.getName());
    raven.takeDamage(60);
    raven.beRepaired(100);
    raven.attack(salah.getName());
    salah.takeDamage(15);
    raven.guardGate();
    salah.getStatus();
    raven.getStatus();
    return (0);
}