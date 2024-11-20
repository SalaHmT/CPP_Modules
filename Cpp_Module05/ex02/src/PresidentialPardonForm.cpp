/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:27:02 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:58:09 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presi", 25, 5)
{
    this->_target = "default";
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presi", 25, 5)
{
    this->_target = target;

};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : AForm(src)
{
    *this = src;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
    this->_target = src._target;
    AForm::operator=(src);
    return *this;
};

PresidentialPardonForm::~PresidentialPardonForm(){};
//-----------------------------------------------------------------
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExec())
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
    else
        throw AForm::GradeTooLowException();
};

//-----------------------------------------------------------------

