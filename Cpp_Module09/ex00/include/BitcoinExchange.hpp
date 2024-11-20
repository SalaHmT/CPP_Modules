/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:36:16 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/19 20:12:05 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXANGE_HPP
# define BITCOINEXANGE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange
{
private :
    std::map<std::string, double> _data;
public :
    BitcoinExchange(std::string file);
    BitcoinExchange & operator=(const BitcoinExchange  & src);
    BitcoinExchange(const BitcoinExchange &src);
    bool getPrice(std::string date, double &btcPrice);
    ~BitcoinExchange();

};
#endif