/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:20:13 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:54:01 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal") {

    std::cout << this->_type << " : Default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << this->_type << " : Copy constructor called" << std::endl;
    *this = src;
}

Animal & Animal::operator=(Animal const & src)
{
    std::cout << this->_type << " : Assignation operator called" << std::endl;
    this->_type = src._type;
    return *this;
}

Animal::~Animal() {

    std::cout << this->_type << " : Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    std::cout << this->_type << " : getType called" << std::endl;
    return this->_type;
}

void Animal::setType(std::string type)
{
    std::cout << this->_type << " : setType called" << std::endl;
    this->_type = type;
}

void Animal::makeSound() const
{
    std::cout << this->_type << "Animal sound not specifed" << std::endl;
}



