/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:20 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:32:13 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *_brain;

    public:
        Cat();
        Cat(Cat const & src);
        Cat & operator=(Cat const & src);
        ~Cat();
        void makeSound() const ;
};

#endif