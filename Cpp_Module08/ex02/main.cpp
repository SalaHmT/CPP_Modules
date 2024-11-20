/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:32:34 by shamsate          #+#    #+#             */
/*   Updated: 2024/10/21 19:46:44 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/MutantStack.hpp"
#include <vector>
#include <list>

// int main()
// {
// 	std::cout << "*******************First Exemple****************************\n";
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << "the top of stack is: " << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << "the size of stack is: " << mstack.size() << std::endl;
// 	std::cout << "Elements: "<<  std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack<int>::iterator it;
// 	for (it = mstack.begin(); it != mstack.end(); it++)
// 		std::cout << *it << "\n";

// 	std::cout << "****************Const Class******************\n";
// 	const MutantStack<int> constMutan = mstack;
// 	MutantStack<int>::const_iterator it_c;
// 	for (it_c = constMutan.begin(); it_c != constMutan.end(); it_c++)
// 		std::cout << *it_c << "\n";

// 	std::cout << "*******************Second Exemple****************************\n";
// 	MutantStack<std::string, std::vector<std::string> > StackOfStudent;
// 	StackOfStudent.push("R4V3N");
// 	StackOfStudent.push("fatima");
// 	StackOfStudent.push("hicham");
// 	StackOfStudent.push("hamid");
// 	StackOfStudent.push("ikram");
// 	StackOfStudent.push("salah");
// 	std::cout << "the last student was added is: " << StackOfStudent.top() << "\n";
// 	std::cout << StackOfStudent.top() << " leaves the school \n";
// 	StackOfStudent.pop();
// 	StackOfStudent.push("hanan");
// 	std::cout << "add a new student: " << StackOfStudent.top() << "\n";
// 	std::cout << "the members of the class are:\n";
// 	MutantStack<std::string, std::vector<std::string> >::iterator it_s;
// 	for (it_s = StackOfStudent.begin(); it_s != StackOfStudent.end(); it_s++)
// 		std::cout << *it_s << "\n";
// 	return 0;
// }
//-----------------------------------------------------------
// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }
//-----------------------------------------------------------------
int main()
{
    std::list<int> myList; // Create a list of integers

    myList.push_back(5);   // Add 5 to the list
    myList.push_back(17);  // Add 17 to the list

    std::cout << myList.back() << std::endl; // Print the last element (17)

    myList.pop_back();     // Remove the last element (17)

    std::cout << myList.size() << std::endl; // Print the size of the list (1)

    myList.push_back(3);   // Add 3 to the list
    myList.push_back(5);   // Add 5 to the list
    myList.push_back(737); // Add 737 to the list
    myList.push_back(0);   // Add 0 to the list

    // Iterating through the list
    std::list<int>::iterator it = myList.begin(); // Iterator at the beginning
    std::list<int>::iterator ite = myList.end();   // Iterator at the end

    while (it != ite) // Iterate until the end
    {
        std::cout << *it << std::endl; // Print the current element
        ++it; // Move to the next element
    }

    // Copying the list into another list
    std::list<int> copiedList(myList);

    return 0;
}
