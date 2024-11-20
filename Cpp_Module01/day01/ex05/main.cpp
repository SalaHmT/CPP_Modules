/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:20:35 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/08 23:07:21 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int	main()
{
	Harl my_harl;

	my_harl.complain("DEBUG");
	my_harl.complain("INFO");
	my_harl.complain("WARNING");
	my_harl.complain("ERROR");
    my_harl.complain("R4V3N");
	return (0);
}