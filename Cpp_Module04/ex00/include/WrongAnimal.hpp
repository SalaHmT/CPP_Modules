/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:39:23 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:44:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _wrong_type;

    public:

        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal & operator=(WrongAnimal const & src);
        ~WrongAnimal();
        void    makeWrSound() const;
        std::string getType() const;
        void setType(std::string type);

};

#endif