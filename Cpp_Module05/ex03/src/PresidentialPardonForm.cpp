/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:20 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:07:53 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :  AForm("Pres", 25, 5){ _target = "default";};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Pres", 25, 5){ _target = target;};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy){ *this = copy;};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
        this->_target = copy._target;
    return *this;
};

PresidentialPardonForm::~PresidentialPardonForm(){};
//--------------------------------------------------------------
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExec())
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw GradeTooLowException();
};
//--------------------------------------------------------------