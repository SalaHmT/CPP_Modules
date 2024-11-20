/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:52:59 by shamsate          #+#    #+#             */
/*   Updated: 2024/10/21 20:11:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/easyfind.hpp"

int main()
{
    try
	{
		std::vector<int> myVec;
		for (int i = 0; i < 5; i++)
			myVec.push_back(i + 1);
		std::cout <<"The elemnte "<< easyfind<std::vector<int>, 5>(myVec) << " is in the vector"<< "\n";
	}
	catch(const char* e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		std::vector<int> myVec;
		for (int i = 0; i < 5; i++)
			myVec.push_back(i + 1);
		std::cout <<"The elemnte "<< easyfind<std::vector<int>, 8>(myVec) << " is in the vector"<< "\n";
	}
	catch(const char* e)
	{
		std::cerr << e << '\n';
	}
}