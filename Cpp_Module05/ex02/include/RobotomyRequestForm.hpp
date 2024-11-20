/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:26:52 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 03:56:05 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm & src);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & src);
        ~RobotomyRequestForm();
// ********************************************************************************************************************
        void        execute(Bureaucrat const & executor) const;;
};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************