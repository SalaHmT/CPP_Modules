/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:16:58 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:29:43 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
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