/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:15 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:03:02 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150) {};

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(false),  _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
};

AForm::~AForm(){};

AForm & AForm::operator=(const AForm & src)
{
    if (this != &src)
    {
        this->_signed = src._signed;
    }
    return *this;
};

AForm::AForm(const AForm & src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec){};
//--------------------------------------------------------------
bool AForm::getSigned() const
{
    return this->_signed;
};

void AForm::setSigned(bool ssigned)
{
    this->_signed = ssigned;
};

const std::string AForm::getName() const
{
    return this->_name;
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
// This function is pure virtual in the AForm class
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
};
//--------------------------------------------------------------
std::ostream & operator<<(std::ostream & o, AForm const & src)
{
    o << "Form name: " << src.getName() << std::endl;
    o << "Form grade to sign: " << src.getGradeToSign() << std::endl;
    o << "Form grade to execute: " << src.getGradeToExec() << std::endl;
    o << "Form signed: " << src.getSigned() << std::endl;
    return o;
};
//--------------------------------------------------------------
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
};

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
};
//--------------------------------------------------------------