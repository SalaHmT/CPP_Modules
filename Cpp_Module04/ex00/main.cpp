/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:49:13 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:57:52 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

int	main(){
	const Animal* base = new Animal();
    const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << i->getType() <<  std::endl;
	std::cout << j->getType() <<  std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	base->makeSound();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wr = new WrongCat();
	wa->makeWrSound();
	wr->makeWrSound();
	delete base;
	delete i;
	delete j;
	delete wa;
	delete wr;
}


