/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:23:00 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/17 21:17:11 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/BitcoinExchange.hpp"

bool chk_date(std::string date)
{
    std::string year;
    std::string month;
    std::string day;
    double _year;
    double _month;
    double _day;
    int i = 0;

    if (date.length() != 10){
        std::cout << "Error: invalid date" << std::endl;
        return(false);
    }
    while(date[i]){
        if (i == 7 || i == 4){
            if (date[i] != '-'){
                std::cout <<"Error: invalid date" << std::endl;
                return(false);
            }
        }
        else if(!isdigit(date[i])){
            std::cout <<"Error: invalid date" << std::endl;
            return (false);}
        i++;
    }
    year = date.substr(0, 4);
    month = date.substr(5, 2);
    day = date.substr(8, 2);
    std::istringstream yr(year);
    std::istringstream mh(month);
    std::istringstream dy(day);
    yr >> _year;
    mh >> _month;
    dy >> _day;
    if (_day <= 0){
        std::cout << "Error: invalid date => " << date << std::endl;
        return (false);}
    if (_month == 4 || _month == 6 || _month == 9 || _month == 11){
        if (_day > 30){
            std::cout << "Error: invalid date " << std::endl;
            return(false);}
    }else if(_month == 2){
        if (_day > 28){
            std::cout << "Error: invalid date " << std::endl;
            return(false);}}
    if (_day > 31 || _month > 12 || _year > 2022 || _year < 2009 || _month <= 0){
        std::cout << "Error: invalid date => " << date << std::endl;
            return(false);}
    return (true);
}
double  chk_val(std::string val)
{
    double vl;
    int i = 0;

    while (val[i]){
        if (i == 0 && (val[i] == '-' || val[i] == '+'))
            i++;
        if (isdigit(val[i])){
            if (val[++i] == '.'){
                if (!isdigit(val[++i])){
                    std::cout << "Error: invalid value " << std::endl;
                    return(0);
                }
            }
        }else{
            std::cout <<"Error: bad input" << std::endl;
            return (0);
        }
        i++;
    }
    std::istringstream vle(val);
    vle >> vl;
    if (vl < 0){
        std::cout <<"Error: not a positive number" << std::endl;
        return (0);
    }
    if (val .length() > 4 || vl > 1000){
        std::cout <<"Error: too large number" << std::endl;
        return (0);
    }
    return (vl);
}

bool chk_ln(std::string ln, BitcoinExchange btc, bool &chk)
{
    double btcPrice;
    double vl;

    if (ln.empty())
        return (true);
    if (chk == true && ln == "date | value"){
        chk = false;
        return (true);}
    if (chk == true && ln != "date | value"){
        std::cout << "Error: invalid file" << std::endl;
        exit (0);}
    if (ln.length() < 10){
        std::cout << "Error: invalid value" << std::endl;
        return (false);}
    std::string dt = ln.substr(0, ln.find('|') - 1);
    std::string val = ln.substr(ln.find('|') + 2);
    if (val.empty()){
        std::cout << "Error: invalid value" << std::endl;
        return (false);}
    if (!chk_date(dt))
        return (false);
    vl = chk_val(val);
    if (vl > 0 && chk_date(dt) && btc.getPrice(dt, btcPrice) == true)
        std::cout << dt << " => " << vl << " = " << btcPrice * vl << std::endl;
    return (true);
}

bool chk_inp(std::string inp, BitcoinExchange btc)
{
    std::ifstream infile(inp);
    std::string ln;
    bool chk = true;

    if (!infile.is_open()){
        std::cout <<"Error: could not open file." << std::endl;
        return (false);}
    while(std::getline(infile, ln))
        chk_ln(ln, btc, chk);
    infile.close();
    return (true);
}
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return(0);
    }
    BitcoinExchange bit("data.csv");
    chk_inp(av[1], bit);
}