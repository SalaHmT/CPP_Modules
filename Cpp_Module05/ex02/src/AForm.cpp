/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:57 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:56:54 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(2), _gradeToExec(3) {};

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(false),  _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();

};
AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec){};

AForm &AForm::operator=(const AForm &src)
{
    this->_signed = src._signed;
    return *this;
};

AForm::~AForm(){};

//--------------------------------------------------------------
bool AForm::getSigned() const
{
    return this->_signed;
};

const std::string AForm::getName() const
{
    return this->_name;
};

void AForm::setSigned(bool value)
{
    this->_signed = value;
};

int AForm::getGradeToSign() const
{
    return this->_gradeToSign;
};

int AForm::getGradeToExec() const
{
    return this->_gradeToExec;
};
//--------------------------------------------------------------
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
};
//--------------------------------------------------------------
std::ostream &operator<<(std::ostream &otp, AForm const &src)
{
    otp << src.getName() << " form is " << src.getGradeToSign() << " and  the Form Grade To exec : " << src.getGradeToExec();
    return otp;
};
//--------------------------------------------------------------
const char *AForm::GradeTooHighException::what() const throw()
{
    return "Form Grade is too high";
};

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Form Grade is too low";
};
//--------------------------------------------------------------
