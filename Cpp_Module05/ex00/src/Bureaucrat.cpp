/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:21:09 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 21:11:53 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade){}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{
    *this = src;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & src)
{
    this->_grade = src._grade;
    std::cout << " Bureaucrat  copy assignation operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat(){};
// ********************************************************************************************************************
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high \n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low \n ";
}
// ********************************************************************************************************************
const std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}
// ********************************************************************************************************************

std::ostream & operator<<(std::ostream & otp, Bureaucrat const & src)
{
    otp << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return otp;
};
// ********************************************************************************************************************