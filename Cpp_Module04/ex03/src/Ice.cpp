/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:23:07 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:24:26 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice()
{
    this->_type = "ice";
}

Ice::Ice( Ice const & src )
{
    *this = src;
}

Ice::~Ice(){}

Ice &				Ice::operator=( Ice const & rhs )
{
    if ( this != &rhs )
    {
        this->_type = rhs.getType();
    }
    return *this;
}

AMateria*			Ice::clone() const
{
    return new Ice();
}

void				Ice::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

