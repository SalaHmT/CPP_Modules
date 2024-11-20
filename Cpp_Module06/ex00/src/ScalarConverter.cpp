/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 03:07:10 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/05 01:55:50 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ScalarConverter.hpp"
#include <limits>
#include <cstring>
#include <algorithm> // for std::replace

ScalarConverter::ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    *this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

ScalarConverter::~ScalarConverter(){};

static std::string to_Lower(std::string str)
{
    std::string newStr = str;
    for (size_t i = 0; i < str.length(); i++)
    {
        newStr[i] = std::tolower(str[i]);
    }
    return (newStr);
}

void ScalarConverter::convertToInt(double d, const std::string &str)
{
    try
    {
        if (to_Lower(str) == "nan" || to_Lower(str) == "nanf")
            throw "int: impossible";
        if (d > INT_MAX || d < INT_MIN)
            throw "int: impossible";
        int i = static_cast<int>(d);
        std::cout << "int : " << i << std::endl;
    }
    catch (const char *e)
    {
        std::cerr << e << std::endl;
    }
}

void ScalarConverter::convertToChar(double d)
{
    try
    {
        int tmp = static_cast<int>(d);
        char carc;
        if (std::isprint(tmp))
            carc = static_cast<char>(d);
        else if ((tmp >= 0 && tmp < 32) || (tmp >= 127 && tmp <= 255))
            throw "char: Non displayable";
        else
            throw "char: impossible";
        std::cout << "char : '" << carc <<"'" << std::endl;
    }
    catch (const char *e)
    {
        std::cerr << e << std::endl;
    }
}

void ScalarConverter::convertToFloat_And_Double(double d, const std::string &str)
{
    try
    {
        std::string modifiedStr = str;
        std::replace(modifiedStr.begin(), modifiedStr.end(), ',', '.');
        size_t pos = modifiedStr.find('.');
        bool FractionalPart = ((pos != std::string::npos) && modifiedStr[pos + 1] != '\0');
        std::string str2 = modifiedStr.substr(pos + 1);
        int setPrec = FractionalPart ? str2.length() : 1;
        if ((modifiedStr.find('f') != std::string::npos) && setPrec != 1)
            setPrec--;
        std::cout << "float : " << std::fixed << std::setprecision(setPrec) << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double : " << std::fixed << std::setprecision(setPrec) << d << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ScalarConverter::convert(const std::string &str)
{
    try
    {
        if (str.empty())
            throw "Impossible";
        ScalarConverter instance;

        // Replace commas with dots in the input string
        std::string modifiedStr = str;
        std::replace(modifiedStr.begin(), modifiedStr.end(), ',', '.');

        char *pos = 0;
        double d = strtod(modifiedStr.c_str(), &pos);

        if (isprint(modifiedStr[0]) && !isdigit(modifiedStr[0]) && modifiedStr[1] == '\0')
            d = static_cast<double>(str[0]);
        else if (!((pos[0] == 'f' && pos[1] == '\0') || pos[0] == '\0'))
            throw "Impossible";

        instance.convertToChar(d);
        instance.convertToInt(d, modifiedStr);
        instance.convertToFloat_And_Double(d, modifiedStr);
    }
    catch (const char *e)
    {
        std::cout << "int : " << e << std::endl;
        std::cout << "char : " << e << std::endl;
        std::cout << "float : " << e << std::endl;
        std::cout << "double : " << e << std::endl;
    }
}

