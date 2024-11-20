/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:02 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 22:32:08 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class AForm;

class Bureaucrat
{
    private:

    const std::string  _name;
    int                _grade;

    public:

    Bureaucrat();
    Bureaucrat(std::string ,int);
    Bureaucrat(const Bureaucrat & src);
    Bureaucrat & operator=(const Bureaucrat & src);
    ~Bureaucrat();
// ********************************************************************************************************************
    const std::string       getName() const  ;
    int                     getGrade() const ;
    void                    incrementGrade();
    void                    decrementGrade();
    // ********************************************************************************************************************
    void                    signForm(AForm  &form);
    void                    executeForm(AForm const & form);
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
};
// ********************************************************************************************************************
std::ostream & operator<<(std::ostream & otp,  Bureaucrat  & src);
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************