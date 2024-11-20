/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:21:14 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:47:02 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
    private:

        const std::string   _name;
        int                 _grade;

    public:

        Bureaucrat();
        Bureaucrat(const std::string  name, int grade);
        Bureaucrat(const Bureaucrat  & src);
        Bureaucrat & operator=(const Bureaucrat  & src);
        ~Bureaucrat();
//********************************************************************************************************************
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
//********************************************************************************************************************
        const std::string   getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
};
//********************************************************************************************************************
std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);
//********************************************************************************************************************
#endif
//********************************************************************************************************************