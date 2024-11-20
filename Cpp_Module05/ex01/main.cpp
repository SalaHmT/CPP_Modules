/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:32:34 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/21 00:46:01 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/Form.hpp"
// int main()
// {
//   try {
// 		Bureaucrat	bure("Office" , 9);
// 		Form	obj("Mo3ahada", 10, 50);
// 		try {
// 			obj.beSigned(bure);
// 		} catch (...) {
// 		}
// 		bure.signForm(obj);
// 	} catch (const std::exception& e) {
// 		std::cout << e.what() << std::endl;
// 	}
//     return 0;
// }
int main()
{
	try
	{
		Bureaucrat b1("b1", 2);
		Form f1("f1", 5, 5);
		b1.signForm(f1);
		Bureaucrat b2("b2", 4);
		Form f2("f2", 1, 1);
		b2.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat b2("b2", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form f2("f2", 154, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}