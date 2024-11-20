/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:55 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:56:34 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:

        std::string _target;

    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm & src);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & src);
        ~ShrubberyCreationForm();
// ********************************************************************************************************************
        void        execute(const Bureaucrat  & executor) const;
};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************