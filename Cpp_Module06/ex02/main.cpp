/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 04:10:43 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/08 20:45:03 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "include/A.hpp"
#include "include/B.hpp"
#include "include/C.hpp"

int main()
{
	/*************Valid Cast***********/
	Base *inst = generate();
	Base &inst1 = dynamic_cast<Base&>(*inst);
	identify_from_pointer(inst);
	identify_from_reference(inst1);

	delete inst;
	/***********Invalid Cast************/
	Base inst2;
	Base inst3;
	identify_from_pointer(NULL);
	identify_from_reference(inst3);
}