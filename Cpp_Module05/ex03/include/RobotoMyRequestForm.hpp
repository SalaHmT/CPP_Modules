/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotoMyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:10 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:02:13 by shamsate         ###   ########.fr       */
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
        void execute(Bureaucrat const & executor) const;
};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************