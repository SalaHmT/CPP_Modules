/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:52:51 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 19:02:47 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

// void	leaks()
// {
// 	system("leaks Animal");
// }
int	main(){
	// atexit(leaks);
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	delete i;
	delete j;
	Cat basic;
	{
		Cat tmp = basic;
	}
	Animal* animal[6] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};

	for(int i = 0; i < 6; i++)
		delete animal[i];
}
