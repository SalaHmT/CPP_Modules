/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:37:45 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 22:49:18 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  // Include necessary header for std::cout

#include "../include/Intern.hpp"
#include "../include/RobotoMyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/AForm.hpp"

// Constructor
Intern::Intern() {}

// Copy constructor
Intern::Intern(const Intern &copy) {
    *this = copy;  // Assuming assignment operator is correctly defined
}

// Assignment operator
Intern &Intern::operator=(const Intern &copy)
{
   (void)copy;
    return *this;
}

Intern::~Intern() {}
//********************************************************************************************************************
// Factory method to create RobotomyRequestForm
AForm *Intern::CreateRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

// Factory method to create PresidentialPardonForm
AForm *Intern::CreatePresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

// Factory method to create ShrubberyCreationForm
AForm *Intern::CreateShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}
//********************************************************************************************************************
// Method to create a form based on its name
AForm *Intern::makeForm(std::string FormName, std::string target) {
    (void)target;  // Marking target as unused
//Function Pointer Array: An array of pointers to member functions (ptr) is created.
// Each pointer points to one of the factory methods.
    AForm *(Intern::*ptr[3])(std::string _target) = {
        &Intern::CreateShrubbery,
        &Intern::CreateRobotomy,
        &Intern::CreatePresidential
    };
    std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++) {
        if (str[i] == FormName) {
            std::cout << "The " << FormName << " form was created\n";
            return (this->*ptr[i])(target);
        }
    }
    std::cout << "Failed to create the " << FormName << " form\n";
    return nullptr;
}
//********************************************************************************************************************