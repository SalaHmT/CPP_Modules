/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:20 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/15 18:19:12 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(float const x, float const y) : _x(x), _y(y) {
    return;
}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {
    return;
}

Point::~Point() {
    return;
}

Point & Point::operator=(Point const &rhs) {
    (void)rhs;
    return *this;
}


float Point::getX() const {
    return this->_x.toFloat();
}

float Point::getY() const {
    return this->_y.toFloat();
}

