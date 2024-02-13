/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:15:16 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/11 15:19:14 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:

	HumanA(std::string name , Weapon  &weapon);
	~HumanA();
	void attack();

private:

	std::string _name;
	Weapon &_weapon;
};

#endif