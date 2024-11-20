/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:58:46 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/14 10:32:53 by shamsate         ###   ########.fr       */
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

        Fixed & operator=(Fixed const &rhs);
        Fixed(const int val);
        Fixed(const float val);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif