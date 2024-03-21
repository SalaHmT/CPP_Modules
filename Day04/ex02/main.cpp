/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:36 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:33:12 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/AAnimal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"

void	leaks()
{
	system("leaks AAnimal");
}
int	main(){
	atexit(leaks);
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}