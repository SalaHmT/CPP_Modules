/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:20:39 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/12 15:30:44 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

// Definition of member function debug
void Harl::debug(void) {
    std::cout << DEBUG << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

// Definition of member function error
void Harl::error(void) {
    std::cout << ERROR << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Definition of member function info
void Harl::info(void) {
    std::cout << INFO "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

// Definition of member function warning
void Harl::warning(void) {
    std::cout << WARNING << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}
// Definition of member function complain
void Harl::complain(std::string level) {
    // Declaration of pointer to member function
    void (Harl::*func)(void);

    // Array of strings representing different levels
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int index = 0;

    while (index < 4 && level != str[index]) {
        index++;
    }

    // Assigning the appropriate member function based on the level
    switch (index) {
        case 0:
            func = &Harl::debug;
            break;
        case 1:
            func = &Harl::info;
            break;
        case 2:
            func = &Harl::warning;
            break;
        case 3:
            func = &Harl::error;
            break;
        default:
            // Printing error message if the level is not found
            std::cout << CMD_ERR << level << END_ERR;
            func = NULL;
    }

    // Calling the member function if it's not null
    if (func)
        (this->*func)();
}
