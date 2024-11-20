/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:15:10 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:23:13 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
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