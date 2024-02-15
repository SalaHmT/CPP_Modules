/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:17 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/15 18:38:24 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

float ft_input();

int main()
{
    float X1, X2, X3, X_point;
    float Y1, Y2, Y3, Y_point;

    std::cout << "A.x = ";
    X1 = ft_input();
    std::cout << "A.y = ";
    Y1 = ft_input();
    std::cout << "B.x = ";
    X2 = ft_input();
    std::cout << "B.y = ";
    Y2 = ft_input();
    std::cout << "C.x = ";
    X3 = ft_input();
    std::cout << "C.y = ";
    Y3 = ft_input();
    std::cout << "P.x = ";
    X_point = ft_input();
    std::cout << "P.y = ";
    Y_point = ft_input();

    Point a(X1, Y1);
    Point b(X2, Y2);
    Point c(X3, Y3);
    Point p(X_point, Y_point);

    if (bsp(a, b, c, p))
        std::cout << "\033[1;32m" << ":) | Point P" << "(" << X_point << "," << Y_point << ") " << "is in the triangle |\033[0m\n";
    else
        std::cout << "\033[1;31m" << ":( | Point P" << "(" << X_point << "," << Y_point << ") " << "is not in the triangle |\033[0m\n";

    return 0;
}