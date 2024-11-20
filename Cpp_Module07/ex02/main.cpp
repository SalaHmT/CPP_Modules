/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:45:14 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/14 00:00:52 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Array.hpp"
#include <iostream>

int main()
{
    Array<int> objIntvide;
	// Instantiate as int
	Array<int> objInt(5);
	for (int i = 0; i < 5; i++)
	{
		objInt[i] = int(i);
		std::cout << "obj[" << i << "] = " << objInt[i] << "\n";
	}
    std::cout << "Size of objInt: " << objInt.size() << "\n";
    try
    {
        std::cout << "objInt[5]: " << objInt[7] << "\n";
    }
    catch(const char *e)
    {
        std::cerr << e << "\n";
    }



	// Instantiate as string
	Array<std::string> objString(5);
	for (int i = 0; i < 5; i++)
	{
		objString[i] = "hello";
		std::cout << "obj[" << i << "] = " << objString[i] << "\n";
	}
	return 0;
}