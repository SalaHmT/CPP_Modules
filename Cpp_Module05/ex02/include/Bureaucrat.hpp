/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:47 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 22:25:52 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <exception>
//This relationship is possible because each class provides access to its members through public methods,
//and each class includes the necessary headers to know about the other class.
class AForm;

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string ,int);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & src);
    Bureaucrat & operator=(const Bureaucrat & src);
// ********************************************************************************************************************
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
// ********************************************************************************************************************
    void                signForm(AForm &form);
    void                executeForm(AForm const & form);
// ********************************************************************************************************************
    const std::string   getName() const;
    int                 getGrade() const ;
    void                incrementGrade();
    void                decrementGrade();
};
// ********************************************************************************************************************
std::ostream & operator<<(std::ostream & otp,  Bureaucrat  & src);
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************