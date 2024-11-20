/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:42:27 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 22:55:48 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : _brain(new Brain()) {
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}


Cat::Cat(Cat const & src) {
    _type = "Cat";
    std::cout << "Cat copy constructor called" << std::endl;
   *this = src;
}

Cat & Cat::operator=(Cat const & src) {
    std::cout << "Cat assignation operator called" << std::endl;
    _type = src._type;
    _brain = new Brain(*src._brain);
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const {
    std::cout << this->_type << "Meow" << std::endl;
}
