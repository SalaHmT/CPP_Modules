/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:15:13 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/11 15:19:19 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB
{

public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void	setWeapon(Weapon &weapon);

private:

	std::string _name;
	Weapon *_weapon;
};

#endif