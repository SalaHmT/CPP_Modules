/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:18:22 by shamsate          #+#    #+#             */
/*   Updated: 2024/10/18 21:09:23 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Span.hpp"

// int main()
// {
// 	try
// 	{
// 		Span sp(5);
// 		std::vector<int> myVec;
// 		for (int i = 0; i < 5; i++)
// 			myVec.push_back(i + 1);
// 		sp.addRangeOfNumbers(myVec.begin(), myVec.end());
	
// 		std::cout << " The shortest Span is: " << sp.shortestSpan() << std::endl;
// 		std::cout << " The longest Span is: "<< sp.longestSpan() << std::endl;
// 	}
// 	catch(const char* e)
// 	{
// 		std::cerr << e << '\n';
// 	}
	
// }
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}