/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 10:08:03 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/07 12:54:03 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

		Zombie(std::string name);
		~Zombie();

		void	setName(std::string name);
		void	announce(void);

	private:

		std::string	_name;
};
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);

#endif