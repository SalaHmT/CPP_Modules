/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:58:51 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/13 18:58:54 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:

        int _fixedPointVal;
        static const int _fractBits;

    public:

        Fixed();
        Fixed(const Fixed &src);
        ~Fixed();

        Fixed & operator=(const Fixed &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);

};

#endif