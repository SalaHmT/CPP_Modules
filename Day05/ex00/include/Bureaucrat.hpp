/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:16:46 by shamsate          #+#    #+#             */
/*   Updated: 2024/03/25 21:55:55 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const & src);

	std::string getName() const;
	int getGrade() const;

	void incrementBGrade();
	void decrementBGrade();

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
	int _grade;
};
std::ostream &operator<<(std::ostream &output, const Bureaucrat &_Bureaucrat);
#endif

