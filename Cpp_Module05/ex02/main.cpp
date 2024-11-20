/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:27:09 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/21 04:09:33 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/AForm.hpp"
#include "include/ShrubberyCreationForm.hpp"
#include "include/RobotomyRequestForm.hpp"
#include "include/PresidentialPardonForm.hpp"


int main()
{
    Bureaucrat b("Office1", 2);
    ShrubberyCreationForm s("home");
    RobotomyRequestForm r("robot");
    PresidentialPardonForm p("pardon");
    r.beSigned(b);
    p.beSigned(b);
    s.beSigned(b);
    b.executeForm(r);
    b.executeForm(p);
    b.executeForm(s);
    // puts("----------------------------------------------");
    //----------------------------------------------
    // try
	// {
	// 	Bureaucrat bur1("b1", 140);
	// 	RobotomyRequestForm f1("Robot1");
	// 	bur1.signForm(f1);
	// 	bur1.executeForm(f1);
	// 	puts("************************");
	// 	Bureaucrat bur2("b2", 4);
	// 	PresidentialPardonForm f2("prisoner");
	// 	bur2.signForm(f2);
	// 	bur2.executeForm(f2);
	// 	puts("************************");
	// 	Bureaucrat bur3("b3", 4);
	// 	ShrubberyCreationForm f3("file");
	// 	f3.execute(bur3);
	// 	puts("************************");
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
    //----------------------------------------------
}