/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:23 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:32:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{

    private:
        Brain *_brain;

        public:

            Dog();
            Dog(Dog const & src);
            Dog & operator=(Dog const & src);
            ~Dog();
            void makeSound() const;
    };

#endif