/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:05:14 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 16:30:58 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/DiamondTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"
#include "include/ClapTrap.hpp"

int     main(void)
{
    DiamondTrap  raven("raven");
    raven.attack("hamza");
    raven.whoAmI();
    return (0);
}