/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 04:15:11 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/29 05:47:55 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScalarConverter.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw "Error: Invalid number of arguments";
        else
            ScalarConverter::convert(av[1]);
    }
    catch(const char *e)
    {
        std::cerr << e << std::endl;
    }
    return 0;
}