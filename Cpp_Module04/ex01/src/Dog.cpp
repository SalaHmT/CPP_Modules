/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:50:02 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 22:54:29 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : _brain(new Brain()) {
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & src) {
    std::cout << "Dog assignation operator called" << std::endl;
    _type = src._type;
    _brain = new Brain(*src._brain);
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const {
    std::cout << this->_type << "Barking !!" << std::endl;
}

