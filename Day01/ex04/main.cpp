/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:01:33 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/12 09:49:58 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace(const std::string& line, const std::string& s1, const std::string& s2) {
    std::string result = line; // Make a copy of the original string

    // Find the first occurrence of s1
    size_t pos = result.find(s1);
    // While s1 is found in the string
    while(pos != std::string::npos)
    {
        // Erase s1 from the result string
        result.erase(pos, s1.length());
        // Insert s2 at the same position
        result.insert(pos, s2);
        // Find the next occurrence of s1
        pos = result.find(s1, pos + s2.length());
    }
    return result;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./replace filename s1 s2 :  INVALID ARGUMENTS." << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream file(filename.c_str()); // Use c_str() to convert to const char*
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string line;
    std::string new_filename = filename + ".replace";
    std::ofstream new_file(new_filename.c_str()); // Use c_str() to convert to const char*
    if (!new_file.is_open())
    {
        std::cout << "Error: could not create new file" << std::endl;
        return 1;
    }
    while (std::getline(file, line))
    {
        new_file << ft_replace(line, s1, s2) << std::endl;
    }
    file.close();
    new_file.close();
    return 0;
}
