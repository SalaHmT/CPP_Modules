/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:33 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:32:58 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(Dog const & src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    type = src.type;
    if (this->_brain)
        delete this->_brain;
    _brain = new Brain(*src._brain);
    return *this;
}


Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Barking !!" << std::endl;
}
