/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:32:29 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:52:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

Form::Form() : _name(""), _gradeToSign(150), _gradeToExecute(150){
    _signed = false;
};

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(false) , _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
};

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){};

Form::~Form(){};

Form &Form::operator=(const Form &src)
{
    this->_signed = src._signed;
      return *this;
};
// ********************************************************************************************************************
std::string Form::getFName() const
{
    return this->_name;
};

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
};

int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
};
// ********************************************************************************************************************
void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw GradeTooLowException();
    this->_signed = true;
};
// ********************************************************************************************************************
std::ostream& operator<<(std::ostream& out, const Form& ob1)
{
	out << ob1.getFName() << ", Form's grade to be sign is "
		<< ob1.getGradeToSign()
		<< ", and the Form's grade to be execute is "
		<< ob1.getGradeToExecute();
	return out;
};
// ********************************************************************************************************************
const char *Form::GradeTooHighException::what() const throw()
{
    return "Form Grade is too high";
};

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form Grade is too low";
};
// ********************************************************************************************************************
