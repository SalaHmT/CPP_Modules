/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 00:00:39 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 01:44:54 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int     main(void)
{
    ClapTrap    stive("Salah");
    ClapTrap    amanda("Ht");

    stive.setDamage(4);
    stive.attack(amanda.getName());
    stive.attack(amanda.getName());
    amanda.takeDamage(1);
    amanda.beRepaired(100);
    amanda.attack(stive.getName());
    stive.takeDamage(1);
    stive.getStatus();
    amanda.getStatus();
    return (0);
}