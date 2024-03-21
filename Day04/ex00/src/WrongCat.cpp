/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:53:57 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:00:00 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"


WrongCat::WrongCat()
{
    _wrong_type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
    this->_wrong_type = src._wrong_type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeWrSound() const
{
    std::cout << "WrongCat sound not specifed" << std::endl;
}
