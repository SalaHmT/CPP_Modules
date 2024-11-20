/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:25 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:08:10 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shru", 145, 137)
{
    this->_target = "default";
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shru", 145, 137)
{
    this->_target = target;

};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
{
    *this = src;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
    this->_target = src._target;
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {};
//--------------------------------------------------------------
    void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() && executor.getGrade() <= this->getGradeToExec())
	{
		std::string file = this->_target + "_shrubbery";
		std::ofstream myFile;
		myFile.open(file);
		if (!myFile.good())
			throw "Failed to open file " + file;
		myFile << "       _-_\n"
				<< "    /~~   ~~\\\n"
				<< " /~~         ~~\\\n"
				<< "{               }\n"
				<< " \\  _-     -_  /\n"
				<< "      \\\\ //\n"
				<< "       | |\n"
				<< "       | |\n"
				<< "      // \\\\ Salah HT" << '\n';
		myFile.close();
	}
	else
		throw GradeTooLowException();
}
//--------------------------------------------------------------