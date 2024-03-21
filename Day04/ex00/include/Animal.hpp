/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:57:55 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:36:13 by shamsate         ###   ########.fr       */
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
    Animal( const Animal  & src);
    Animal & operator=( const Animal & src);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
    void setType(std::string type) ;
};

#endif

