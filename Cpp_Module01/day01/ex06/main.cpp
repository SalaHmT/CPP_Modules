/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:28:09 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/08 23:43:48 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << ARG_ERR;
        return 1;
    }
    // Create an instance of the Harl class
    Harl my_harl;
    // Call the complain function with the provided argument
    my_harl.complain(av[1]);
    // Return 0 to indicate successful execution
    return 0;
}
