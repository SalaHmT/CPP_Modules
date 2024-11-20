/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:50:37 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:37:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src) {
    *this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src) {
        this->_type = src._type;
        std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    std::cout << "Animal getType called" << std::endl;
    return this->_type;
}

void Animal::setType(std::string type) {
    std::cout << "Animal setType called" << std::endl;
    this->_type = type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound not specifed" << std::endl;
}



