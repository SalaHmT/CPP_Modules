/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:32:27 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:50:20 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:

        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

    public:

        Form();
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &src);
        Form & operator=(const Form  &src);
        ~Form();
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
        std::string         getFName() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;
        void                beSigned(const Bureaucrat & bureaucrat);
};
// ********************************************************************************************************************
std::ostream & operator<<(std::ostream & otp, const Form  & src);
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************