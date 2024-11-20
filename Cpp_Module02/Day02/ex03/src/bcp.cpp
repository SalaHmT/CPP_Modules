/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bcp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:51:29 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/15 20:34:09 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

#define CNTR_D "\x1b[31m :( Must Not Empty relanch . \033[0m\n"
#define NOT_DIGIT "\x1b[31m :( Error: Enter -> digit\033[0m\n"

static float suf(Point const &p1, Point const &p2, Point const &p3)
{
    float x1 = p1.getX();
    float x2 = p2.getX();
    float x3 = p3.getX();

    float y1 = p1.getY();
    float y2 = p2.getY();
    float y3 = p3.getY();

    float temp_area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (temp_area < 0)
        temp_area = -temp_area;

    float area = temp_area / 2.0;

    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float area_1, area_2, area_3;
    float area;

    area = suf(a, b, c);
    area_1 = suf(a, b, point);
    area_2 = suf(b, c, point);
    area_3 = suf(a, c, point);

    if (area_1 == 0 || area_2 == 0 || area_3 == 0)
        return false;

    return (area_1 + area_2 + area_3 == area);
}
float ft_input()
{
    float value;
    std::string line;
    std::getline(std::cin, line);

    if (line.empty())
    {
        std::cout << CNTR_D;
        exit(1);
    }

    for (int i = 0; i < (int)line.length(); i++)
    {
        char c = line[i];
        if (!std::isdigit(c) && c != '.')
        {
            std::cout << NOT_DIGIT;
            exit(1);
        }
    }

    value = std::stof(line);
    return value;
}

