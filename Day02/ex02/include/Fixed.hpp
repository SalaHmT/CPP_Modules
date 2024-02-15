/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:33:00 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/14 11:18:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:

        int _fixedPointVal;
        static  int const _fractBits;

    public:

        Fixed();
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed(const int val);
        Fixed(const float val);

        Fixed & operator=(Fixed const &rhs);
        Fixed operator+(Fixed const &Fixed);
        Fixed operator-(Fixed const &Fixed);
        Fixed operator/(Fixed const &Fixed);
        Fixed operator*(Fixed const &Fixed);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        bool operator<(Fixed const &fixed) const;
        bool operator>(Fixed const &fixed) const;
        bool operator<=(Fixed const &fixed) const;
        bool operator>=(Fixed const &fixed) const;
        bool operator!=(Fixed const &fixed) const;
        bool operator==(Fixed const &fixed) const;
        static Fixed &min(Fixed &fixed1, Fixed &fixed2);
        static Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
        static Fixed &max(Fixed &fixed1, Fixed &fixed2);
        static Fixed &max(Fixed const &fixed1, Fixed const &fixed2);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif