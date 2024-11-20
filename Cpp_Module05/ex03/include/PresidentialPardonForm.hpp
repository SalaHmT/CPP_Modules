/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:08 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:01:49 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
    private:

        std::string _target;

    public:

        PresidentialPardonForm();
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm & src);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & src);
        ~PresidentialPardonForm();
// ********************************************************************************************************************
        void execute(Bureaucrat const & executor) const;
};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************