/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:23:07 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/05 10:28:57 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		~Contact();

	void	set_first(std::string first);
	void	set_last(std::string last);
	void	set_nick(std::string nick);
	void	set_phone(std::string phone);
	void	set_d_secret(std::string d_secret);

	std::string	get_first();
	std::string	get_last();
	std::string	get_nick();
	std::string	get_phone();
	std::string	get_d_secret();

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif