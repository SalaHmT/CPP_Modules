/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:22:46 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/12 15:26:14 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

// ANSI escape codes for colored output
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define RESET "\033[0m"

// Error messages with different colors
#define ERROR RED "[ERROR]:\n" RESET
#define DEBUG BLUE "[DEBUG]:\n" RESET
#define WARNING YELLOW "[WARNING]:\n" RESET
#define INFO GREEN "[INFO]:\n" RESET
#define CMD_ERR RED "[Error level not found -> [" RESET
#define ARG_ERR "\x1b[31mError in argument\033[0m\n"
#define END_ERR RED "]\033[0m\n" RESET

class Harl {

public:

    Harl();
    ~Harl();
    void complain(std::string level);

private:

    void debug();
    void info();
    void warning();
    void error();
};

#endif