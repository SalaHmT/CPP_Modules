/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:04 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/11 15:18:48 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"
/*****************************************************************************************************/
Rpn::Rpn(){};
/*****************************************************************************************************/
Rpn::~Rpn(){};
/*****************************************************************************************************/
Rpn & Rpn::operator=(const Rpn &src){
    _stack = src._stack;
    return (*this);
};
/*****************************************************************************************************/
Rpn::Rpn(const Rpn &src){
    *this = src;
};
/*****************************************************************************************************/
float Rpn::getTop() {
    return (_stack.top());
};
/*****************************************************************************************************/
int Rpn::Reverse_pol_Not(std::string &str)
{
    float number_count = 0;
    float op_count = 0;

    for (size_t i = 0 ; i < str.length(); ++i) { // Use traditional for loop
        char ch = str[i];
        if (ch == ' ') continue; // Skip spaces
        if (isdigit(ch)) { // If it's a digit
            float num = ch - '0'; // Convert char to float
            _stack.push(num);
            number_count++;
        } else if (_stack.size() >= 2 && (ch == '+' || ch == '-' || ch == '*' || ch == '/')) {
            // Pop the top two numbers for operation
            float first_number = _stack.top(); _stack.pop();
            float second_number = _stack.top(); _stack.pop();
            float result_number = 0;

            // Perform the operation using conditional statements instead of switch
            if (ch == '+') {
                result_number = second_number + first_number;
            } else if (ch == '-') {
                result_number = second_number - first_number;
            } else if (ch == '*') {
                result_number = second_number * first_number;
            } else if (ch == '/') {
                if (first_number == 0) {
                    std::cout << "Error: division by zero" << std::endl;
                    return -1; // Return error code for division by zero
                }
                result_number = second_number / first_number;
            }

            _stack.push(result_number); // Push the result onto the stack
            op_count++;
        } else {
            std::cout << "Error: invalid argument" << std::endl;
            return -1; // Return error code
        }
    }

    // Check if the correct number of operations were performed
    if (op_count != number_count - 1) {
        std::cout << "Error: wrong expression" << std::endl;
        return -1; // Return error code
    }

    std::cout << _stack.top() << std::endl; // Output the final result
    return (0); // Return success code
};
/*****************************************************************************************************/