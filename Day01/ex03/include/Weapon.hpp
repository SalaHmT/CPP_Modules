/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:15:11 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/11 15:19:32 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

public:
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType() ;
	void	setType(std::string type);

private:
	std::string _type;
};

#endif