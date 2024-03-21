/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:13 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:37:07 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{

    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(AAnimal const & src);
        virtual ~AAnimal();
        AAnimal & operator=(AAnimal const & src);
        virtual void makeSound() const = 0;
        void setType(std::string type);
        std::string getType() const;
};

#endif