/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:15:42 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:19:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
    this->_type = "N/A";
}

AMateria::AMateria( AMateria const & src )
{
    *this = src;
}

AMateria::AMateria( std::string const & type )
{
    this->_type = type;
}

AMateria::~AMateria(){}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
    if ( this != &rhs )
    {
        this->_type = rhs.getType();
    }
    return *this;
}

std::string const &		AMateria::getType() const
{
    return this->_type;
}

void					AMateria::use( ICharacter& target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
     std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


