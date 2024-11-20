/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:00 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 22:31:15 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <stdlib.h>
# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
        private:

        const               std::string  _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExec;

        public:

        AForm();
        virtual ~AForm();
        AForm(std::string, int gradeToSign, int gardeToExec);
        AForm(const AForm & src);
        AForm & operator=(const AForm & src);
// ********************************************************************************************************************
        const std::string   getName() const;
        bool                getSigned() const;
        void                setSigned(bool) const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        void                setSigned(bool ssigned);
// ********************************************************************************************************************
        void                beSigned(const Bureaucrat  &bureaucrat);
// ********************************************************************************************************************
        virtual void        execute(Bureaucrat const &  executor) const = 0;
// ********************************************************************************************************************
        class GradeTooHighException : public std::exception
        {
        public:
                 const char * what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
        public:
                 const char * what() const throw();
        };
};
// ********************************************************************************************************************
std::ostream & operator<<(std::ostream & o, AForm const & src);
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************