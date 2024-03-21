/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:21:23 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:03 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure()
{
    this->_type = "cure";
}

Cure::Cure( Cure const & src )
{
    *this = src;
}

Cure::~Cure(){}

Cure &				Cure::operator=( Cure const & rhs )
{
    if ( this != &rhs )
    {
        this->_type = rhs.getType();
    }
    return *this;
}

AMateria*			Cure::clone() const
{
    return new Cure();
}

void				Cure::use( ICharacter& target )
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}






