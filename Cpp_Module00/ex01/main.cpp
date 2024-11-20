/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:34:03 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/05 10:01:20 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

void check_input(std::string inp)
{
	int len;

	len = inp.length();
	if(len >= 10)
	{
		inp.resize(9);
		inp += '.';
		std::cout << inp;
	}
	else
		std::cout << std::setw(10) << inp;
}

int main()
{
	PhoneBook awsomebook;
	std::string ln;
	std::string str;


	int	cnt = 0;
	while(1)
	{
		std::cout <<" \n+-------------------------------------------+\n";
		std::cout << "\n|             -  PhoneBook  -               |\n";
		std::cout << "\n|  Enter Your Choice: (ADD - SEARCH - EXIT) |\n";
		std::cout << "\n+-------------------------------------------+\n";
		std::cout << " λ : ";
		if(!getline(std::cin, ln)){
			break;
		}
		if(ln.compare("ADD") == 0)
		{
			if(cnt == 8)
				cnt = 0;
			ln = add_args("\nENTER FIRST NAME : ");
			awsomebook.set_first(ln, cnt);
			ln = add_args("ENTER LAST NAME : ");
			awsomebook.set_last(ln, cnt);
			ln = add_args("ENTER NICK NAME : ");
			awsomebook.set_nick(ln, cnt);
			ln = add_args("ENTER PHONE NUMBER : ");
			awsomebook.set_phone(ln, cnt);
			ln = add_args("ENTER DARKEST SECRET : ");
			awsomebook.set_d_secret(ln, cnt);
			cnt++;
			std::cout <<"\n*  Adding Done . *";
		}
		if(ln.compare("SEARCH") == 0)
		{
			std::cout << "+---------+----------+----------+----------+"<< std::endl;
			std::cout << "|  INDEX  |FIRST NAME| LAST NAME| NICKNAME |"<< std::endl;
			std::cout << "+---------+----------+----------+----------+"<< std::endl;
			int	idx = 0;
			while(idx < 8)
			{
				if(awsomebook.get_first(idx).empty())
					break;
				std::cout << "|"; std::cout << "    " << idx << "    |";
				check_input(awsomebook.get_first(idx)); std::cout << "|";
				check_input(awsomebook.get_last(idx)); std::cout << "|";
				check_input(awsomebook.get_nick(idx)); std::cout << "|"<< std::endl;
				std::cout << "+---------+----------+----------+----------+"<< std::endl;
				idx++;
			}
			std::cout << "\nENTER THE INDEX : ";
			if(!getline(std::cin, str))
				break;
			int	number = atoi(str.c_str());
			if(str.length() != 1 || !isdigit(str[0]) || number == 8 || number == 9){
				std::cout << "      ** ! INVALID NUMBER :( **" << std::endl;
			}
			else if(number < idx)
				print_args(awsomebook, number);
		}
		if(ln.compare("EXIT") == 0)
			break;
	}
}