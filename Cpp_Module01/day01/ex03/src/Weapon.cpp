/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:15:03 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/12 15:35:22 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::~Weapon(){}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

