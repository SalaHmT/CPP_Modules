/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:26:52 by shamsate          #+#    #+#             */
/*   Updated: 2024/03/28 22:29:59 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;
class Form{
public:
    Form();
    Form(std::string _name, int _gradeToSign, int _gradeToExecute);
    Form(const Form & src);
    ~Form();
    Form & operator=(Form const & src);

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getIsSigned() const;

    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
        public :
        GradeTooHighException() throw();
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public :
        GradeTooLowException() throw();
        const char* what() const throw();
    };
        private:
            const std::string  _name;
            const int _gradeToSign;
            const int _gradeToExecute;
            bool _isSigned;
    };
    std::ostream &operator<<(std::ostream &output, const Form &_Form);
#endif