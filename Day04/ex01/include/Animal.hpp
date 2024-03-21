/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:12:45 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 18:28:39 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(Animal const & src);
    Animal & operator=(Animal const & src);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const ;
    void setType(std::string type) ;
};

#endif