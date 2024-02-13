/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:23:42 by shamsate          #+#    #+#             */
/*   Updated: 2024/01/26 03:47:29 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>


class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void set_first(std::string first, int idx);
        void set_last(std::string last, int idx);
        void set_nick(std::string nick, int idx);
        void set_phone(std::string number, int idx);
        void set_d_secret(std::string d_secret, int idx);

		std::string get_first(int idx);
		std::string get_last(int idx);
		std::string get_nick(int idx);
		std::string get_phone(int idx);
        std::string get_d_secret(int idx);

	private:
		Contact	ContactInfo[8];
};

	void print_args(PhoneBook phone, int index);
	std::string add_args(std::string input);

#endif