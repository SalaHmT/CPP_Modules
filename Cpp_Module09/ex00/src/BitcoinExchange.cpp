/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:47:06 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/17 21:21:14 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

/******************************************************************************/
BitcoinExchange::BitcoinExchange(std::string file)
{
    std::ifstream infile(file);
    std::string ln;

    while (std::getline(infile, ln))
    {
        std::string key = ln.substr(0, ln.find(','));
        std::string val = ln.substr(ln.find(',') + 1);
        std::istringstream istr(val);
        double num;
        istr >> num;
        _data.insert(std::pair<std::string, double>(key, num));
    }
    infile.close();
};
/******************************************************************************/
BitcoinExchange::BitcoinExchange(const BitcoinExchange & src)
{
    _data = src._data;
};
/******************************************************************************/
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & src)
{
    _data = src._data;
    return *this;
};
/******************************************************************************/
BitcoinExchange::~BitcoinExchange(){};
/******************************************************************************/
bool BitcoinExchange::getPrice(std::string dt, double &btcPrice)
{
    if (dt < "2009-01-02" || dt >"2022-03-29"){
        std::cout << "Error: no date found" << std::endl;
        return (false);}
    std::map<std::string, double>::iterator itr;
    itr = _data.find(dt);
    if (itr == _data.end()){
        itr = _data.upper_bound(dt);
        // If itr is at the beginning of the map or there is no valid date before dt
        if (itr == _data.begin()) {
            std::cout << "Error: no valid date found before " << dt << std::endl;
            return false;
        }
        // Move itr one step back to get the closest date before dt
        --itr;
    }
    // Get the price for the found date (either exact or previous closest)
    btcPrice = itr->second;
    return true;
}
/******************************************************************************/