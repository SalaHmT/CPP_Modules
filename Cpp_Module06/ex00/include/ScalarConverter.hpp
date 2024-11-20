/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 03:07:13 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/29 04:29:55 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter
{
    private :
        ScalarConverter();
        ScalarConverter(ScalarConverter const &src);
        ScalarConverter &operator=(ScalarConverter const &rhs);
        ~ScalarConverter();
//---------------------------------Methods---------------------------------------
        static void convertToChar(double d);
        static void convertToInt(double d, const std::string &str);
        static void convertToFloat_And_Double(double d, const std::string &str);
public :
    static void convert(const std::string &str);
};
//-------------------------------------------------------------------------------

#endif
