/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:37:27 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/17 15:38:07 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

    protected:
        std::string _name;
        int     _hitpoints;
        int     _energyPoints;
        int     _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const & src);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setDamage(unsigned int damage);
        std::string getName();
        void getStatus();
        int getAttackDamage();

};
#endif