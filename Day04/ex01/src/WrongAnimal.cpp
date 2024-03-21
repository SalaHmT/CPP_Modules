/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:38:43 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:42:27 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
    this->_type = src._type;
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "WrongAnimal getType called" << std::endl;
    return this->_type;
}

void WrongAnimal::setType(std::string type)
{
    std::cout << "WrongAnimal setType called" << std::endl;
    this->_type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound not specified" << std::endl;
}
