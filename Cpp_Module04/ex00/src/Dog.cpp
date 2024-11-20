/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:30:22 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:40:41 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include"../include/Animal.hpp"

Dog::Dog()  {
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & src) {
    std::cout << "Dog assignation operator called" << std::endl;
    this->_type = src._type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}
