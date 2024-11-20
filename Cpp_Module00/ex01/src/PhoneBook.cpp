/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:37:37 by shamsate          #+#    #+#             */
/*   Updated: 2024/01/27 01:36:20 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"
#include <string>

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

void PhoneBook::set_first(std::string first, int i)
{
	ContactInfo[i].set_first(first);
}
void PhoneBook::set_last(std::string last, int i)
{
	ContactInfo[i].set_last(last);
}
void PhoneBook::set_nick(std::string nick, int i)
{
	ContactInfo[i].set_nick(nick);
}
void PhoneBook::set_phone(std::string phone, int i)
{
	ContactInfo[i].set_phone(phone);
}
void PhoneBook::set_d_secret(std::string d_secret, int i)
{
	ContactInfo[i].set_d_secret(d_secret);
}

std::string PhoneBook::get_first(int i)
{
	return ContactInfo[i].get_first();
}
std::string PhoneBook::get_last(int i)
{
	return ContactInfo[i].get_last();
}
std::string PhoneBook::get_nick(int i)
{
	return ContactInfo[i].get_nick();
}
std::string PhoneBook::get_phone(int i)
{
	return ContactInfo[i].get_phone();
}
std::string PhoneBook::get_d_secret(int i)
{
	return ContactInfo[i].get_d_secret();
}

std::string add_args(std::string msg)
{
	std::string bloc;
	do
	{
	std::cout << msg;
	if(!getline(std::cin, bloc))
		break;
	if(bloc.empty())
		std::cout << "	***  ! INVALID ARGUMENT  :(  ***" << std::endl;
	}
	while(bloc.empty());
	return(bloc);
}

void print_args(PhoneBook phone, int idx)
{
	std::cout << "\nFIRST NAME : " << phone.get_first(idx) << std::endl;
	std::cout << "LAST NAME : " << phone.get_last(idx) << std::endl;
	std::cout << "NICK NAME : " << phone.get_nick(idx) << std::endl;
	std::cout << "PHONE NUMBER : " << phone.get_phone(idx) << std::endl;
	std::cout << "DARKEST SECRET : " << phone.get_d_secret(idx) << std::endl;
}