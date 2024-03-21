/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:53:54 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:59:51 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _wrong_type = "WrongAnimal";
    std::cout << "WrongAnimal  Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
    this->_wrong_type = src._wrong_type;
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_wrong_type;
}

void WrongAnimal::makeWrSound() const
{
    std::cout << "WrongAnimal sound not specifed" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    this->_wrong_type = type;
    std::cout << "WrongAnimal setType called" << std::endl;
}



