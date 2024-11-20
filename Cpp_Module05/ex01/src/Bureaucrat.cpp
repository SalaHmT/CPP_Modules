/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:32:32 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:51:49 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150){};

Bureaucrat::Bureaucrat( std::string name, const int grade) : _name(name)
{
    if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
};

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat  &src)
{
    *this = src;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
        this->_grade = src._grade;
        return *this;
};
// ********************************************************************************************************************
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat Grade is too high";
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat Grade is too low";
};
// ********************************************************************************************************************
void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name
				<< " signed " << form.getFName() << '\n';
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name
			<< " couldn't sign " << form.getFName()
			<< " because " << e.what() << '\n';
	}
}
// ********************************************************************************************************************
const std::string Bureaucrat::getName() const
{
    return this->_name;
};

int Bureaucrat::getGrade() const
{
    return this->_grade;
};

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
};

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
};
// ********************************************************************************************************************
std::ostream &operator<<(std::ostream &out, Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return out;
};

// ********************************************************************************************************************