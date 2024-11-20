/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:10 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/11 15:11:48 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/RPN.hpp"

int main(int ac, char **av)
{
    Rpn     obj;
    if(ac != 2)
    {
        std::cout << "Error : invalid arguments" << std::endl;
        return(0);
    }
    std::string str = av[1];
    obj.Reverse_pol_Not(str);
}