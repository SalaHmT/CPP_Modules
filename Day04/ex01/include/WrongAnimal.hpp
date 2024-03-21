/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:25:38 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:26:52 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:

    WrongAnimal();
    WrongAnimal( const WrongAnimal  & src);
    WrongAnimal & operator=( const WrongAnimal & src);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
    void setType(std::string type);
};

#endif