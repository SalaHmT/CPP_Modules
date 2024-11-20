/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:18 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:03:21 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat() : _name("salah"), _grade(150){};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
};

Bureaucrat::Bureaucrat(const Bureaucrat & src) : _name(src._name), _grade(src._grade){};

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src)
{
    if (this != &src)
    {
        this->_grade = src._grade;
    }
    return *this;
};

Bureaucrat::~Bureaucrat(){};
//--------------------------------------------------------------
const std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
};

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
};

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
};
//--------------------------------------------------------------
void Bureaucrat::signForm(AForm  &form)
{
        try {
            form.beSigned(*this);
            std::cout<<this->_name<<" signed "<<form.getName()<<std::endl;
        }
        catch (std::exception &e)
        {
            std::cout<<this->_name<<" cannot sign "<<form.getName()<<" because "<<e.what()<<std::endl;
        }
};
//--------------------------------------------------------------
void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout<<this->_name<<" executes "<<form.getName()<<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout<<this->_name<<" cannot execute "<<form.getName()<<" because "<<e.what()<<std::endl;
    }
};
//--------------------------------------------------------------
std::ostream &operator<<(std::ostream &out,  Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
};
//--------------------------------------------------------------
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
};
//--------------------------------------------------------------