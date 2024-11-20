/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotoMyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:22 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/21 21:26:01 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/RobotoMyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robo", 72, 45){ _target = "default";};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robo", 72, 45) { _target = target;};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) { *this = copy;};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
        this->_target = copy._target;
    return *this;
};

RobotomyRequestForm::~RobotomyRequestForm() {};

//-------------------------------------------------| execute
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExec())
    {
        std::srand(std::time(0));
        int val = rand() % 2;
        std::cout << " Makes some drilling noises..." << std::endl;
        if (val)
            std::cout << this->_target << " has been robotomized" << std::endl;
        else
            std::cout << this->_target << " has not been robotomized" << std::endl;
    }
    else
    throw GradeTooLowException();
}
//-------------------------------------------------| execute