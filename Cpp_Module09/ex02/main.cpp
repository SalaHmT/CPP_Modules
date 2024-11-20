/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:29:01 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/11 18:28:25 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac > 1){
        PmergeMe Mg_Ins(ac, av);
        Mg_Ins.Vec_Rslt();
        Mg_Ins.Dq_Rslt();}
    else
        std::cout << "Error : invalid arguments" << std::endl;
}