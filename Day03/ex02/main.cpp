/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:37:44 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 15:47:35 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/FragTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/ClapTrap.hpp"

int     main(void)
{
    ClapTrap     salah("salah");
    ScavTrap    raven("raven");
    FragTrap    hamza("hamza");

    salah.setDamage(2);
    salah.attack(raven.getName());
    raven.takeDamage(60);
    raven.beRepaired(100);
    raven.attack(salah.getName());
    salah.takeDamage(15);
    raven.takeDamage(2);
    raven.guardGate();
    hamza.highFivesGuys();
    salah.getStatus();
    raven.getStatus();
    return (0);
}