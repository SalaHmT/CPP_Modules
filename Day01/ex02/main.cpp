/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:36:20 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/07 11:41:53 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string msg  = "HI THIS IS BRAIN";
	std::string *stringPTR = &msg;
	std::string &stringREF = msg;

	std::cout << "The memory address of the string variable = " << &msg << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl << std::endl;
	std::cout << "The value of the string variable : " << msg << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}