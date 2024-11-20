/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:04:53 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 19:26:30 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include "../include/ScavTrap.hpp"

DiamondTrap::DiamondTrap() : _name("DiamondTrap")
{
    this->_attackDamage = 30;
    this->_energyPoints = 50 ;
    this->_hitpoints = 100 ;

    std::cout << "DiamondTrap  default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    this->_attackDamage = 30 ;
    this->_energyPoints =  50;
    this->_hitpoints =  100;

    std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "who am I ? : - > I am " << _name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}
