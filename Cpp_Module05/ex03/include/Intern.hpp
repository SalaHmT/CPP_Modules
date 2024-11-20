/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:19:05 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/23 04:01:20 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
    private:

    AForm *CreateShrubbery(std::string target);
    AForm *CreateRobotomy(std::string target);
    AForm *CreatePresidential(std::string target);

    public:

        Intern();
        Intern(const Intern & src);
        Intern & operator=(const Intern & src);
        ~Intern();
// ********************************************************************************************************************
        AForm *makeForm(std::string FormName, std::string target);

};
// ********************************************************************************************************************
#endif
// ********************************************************************************************************************