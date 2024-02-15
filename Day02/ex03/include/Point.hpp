/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:25 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/15 18:21:00 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:

        Fixed const _x;
        Fixed const _y;

    public:

        Point(float const x, float const y);
        Point(Point const &src);
        ~Point();

        Point & operator=(Point const &rhs);

        float  getX() const;
        float  getY() const;

};

#endif