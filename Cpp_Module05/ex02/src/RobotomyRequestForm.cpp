/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:27:04 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:58:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robo", 72,45)
{
    this->_target = "default";

};

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  AForm("robo", 72,45)
{
    this->_target = target;

};

RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : AForm(src)
{
    *this = src;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
    this->_target = src._target;
    AForm::operator=(src);
    return *this;
};
// ********************************************************************************************************************
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExec())
    {
        int tmp = rand() % 2;
        std::cout << this->_target<< " Makes some drilling noises" << std::endl;
        if (tmp)
            std::cout << this->_target << " has been robotomized" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized" << std::endl;
    }
    else
        throw GradeTooLowException();
    }

