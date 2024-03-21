/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:24:06 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:33:42 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain() {
        std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(Brain const & src) {
    *this = src;
    std::cout << "Brain: Copy constructor called" << std::endl;
    }

Brain & Brain::operator=(Brain const & src)
{
    std::cout << "Brain: Assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain: Destructor called" << std::endl;
}




