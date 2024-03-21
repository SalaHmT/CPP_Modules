/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:31 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:32:53 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    _brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat & Cat::operator=(Cat const & src)
{
    std::cout << "Cat assignation operator called" << std::endl;
    type = src.type;
    if (this->_brain)
			delete this->_brain;
    _brain = new Brain(*src._brain);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

