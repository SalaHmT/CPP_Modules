/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:17:01 by shamsate          #+#    #+#             */
/*   Updated: 2024/03/25 21:52:44 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "include/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Office1", 2);
        b.incrementBGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------
    try
    {
        Bureaucrat b("Office2", 1);
        b.incrementBGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     //-----------------------------
    try
    {
        Bureaucrat b("Office3", 149);
        b.decrementBGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //------------------------------------------
    return 0;
}