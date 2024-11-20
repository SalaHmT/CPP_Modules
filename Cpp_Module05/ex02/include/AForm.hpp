/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:45 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 22:25:17 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
//This relationship is possible because each class provides access to its members through public methods,
// and each class includes the necessary headers to know about the other class.
class AForm
{
    private:
        const std::string   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExec;
    public:

        AForm();
        AForm(std::string, int gradeToSign, int gardeToExec);
        void                beSigned(const Bureaucrat  &bureaucrat);
        const std::string   getName() const ;
        AForm(const AForm & src);
        AForm & operator=(const AForm & src);
        virtual ~AForm();
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
        bool                getSigned() const;
        void                setSigned(bool);
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        virtual void        execute(Bureaucrat const & executor) const  = 0;
};
// ********************************************************************************************************************
std::ostream & operator<<(std::ostream & otp, AForm const & src);
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************