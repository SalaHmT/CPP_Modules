/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:28 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 19:15:41 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=(Brain const & src)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = src._ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

