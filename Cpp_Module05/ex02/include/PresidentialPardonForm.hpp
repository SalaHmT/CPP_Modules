/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:50 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:55:46 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:

        std::string     _target;

    public:

        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm & src);
        ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(const PresidentialPardonForm & src);
// ********************************************************************************************************************
        void            execute(Bureaucrat const & executor) const;
};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************