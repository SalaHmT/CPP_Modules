/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:04:51 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 01:08:35 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap") , _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hitpoints (10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap  Parameterized constructor  called" << std::endl;
    _name = name;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{

    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    std::cout << "ClapTrap assignation operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(std::string const& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
        _attackDamage += 1;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " don't have enough energy to attack " << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints > (int)amount)
    {
        _hitpoints -= amount;
        std::cout << "ClapTrap " <<  _name  << " was attacked and lost " << amount << " of Hit points" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " <<  _name  << " is dead" << std::endl;
        _hitpoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot be repaired" << std::endl;
    }
    else if (_energyPoints > 0)
    {
        _hitpoints += amount;
        if (_hitpoints > 10)
            _hitpoints = 10;
        _energyPoints -= 1;
        _attackDamage += 1;
        std::cout << "ClapTrap " << this->_name  << " was repaired and gained " << _hitpoints << " of Hit points" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " don't have enough energy to Repaired " << std::endl;
    }
}

std::string ClapTrap::getName()
{
    return _name;
}

void ClapTrap::getStatus(){
if (_energyPoints > 0)
{
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Hitpoints: " << _hitpoints << std::endl;
    std::cout << "Energy Points: " << _energyPoints << std::endl;
    std::cout << "Attack Damage: " << _attackDamage << std::endl;
}
else
{
    std::cout << "ClapTrap " << _name << " is dead" << std::endl;
}
}

int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}

void ClapTrap::setDamage(unsigned int damage)
{
    _attackDamage = damage;
}