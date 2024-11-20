/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:30:38 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 19:32:38 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "WrongAnimal getType called" << std::endl;
    return type;
}

void WrongAnimal::setType(std::string type)
{
    std::cout << "WrongAnimal setType called" << std::endl;
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound not specified" << std::endl;
}
