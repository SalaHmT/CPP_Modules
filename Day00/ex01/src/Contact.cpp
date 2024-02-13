/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:22:39 by shamsate          #+#    #+#             */
/*   Updated: 2024/01/26 02:50:17 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::set_first(std::string first)
{
    _first_name = first;
}
void Contact::set_last(std::string last)
{
    _last_name = last;
}
void Contact::set_nick(std::string nick)
{
    _nick_name = nick;
}
void Contact::set_phone(std::string phone)
{
    _phone_number = phone;
}
void	Contact::set_d_secret(std::string d_secret)
{
	_darkest_secret = d_secret;
}

std::string Contact::get_d_secret()
{
	return _darkest_secret;
}
std::string Contact::get_first()
{
	return _first_name;
}
std::string Contact::get_last()
{
    return _last_name;
}
std::string Contact::get_nick()
{
	return _nick_name;
}
std::string Contact::get_phone()
{
	return _phone_number;
}