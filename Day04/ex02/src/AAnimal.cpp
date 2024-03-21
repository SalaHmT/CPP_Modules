/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:26 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:32:43 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal"){
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & src) {
    std::cout << "AAnimal assignation operator called" << std::endl;
    type = src.type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const {
    std::cout << "AAnimal getType called" << std::endl;
    return type;
}

void AAnimal::setType(std::string type) {
    std::cout << "AAnimal setType called" << std::endl;
    this->type = type;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal sound not specified" << std::endl;
}

