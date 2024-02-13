/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:58:34 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/13 21:56:43 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) : _fixedPointVal(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointVal;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointVal = raw;
}


Fixed & Fixed::operator=( Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs._fixedPointVal);
    return (*this);
}

Fixed::Fixed(const int val) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointVal = val << _fractBits;
    this.setRawBits(_fixedPointVal);
}
Fixed::Fixed(const float val) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointVal = roundf(val * (1 << _fractBits));
    this.setRawBits(_fixedPointVal);
}

float Fixed::toFloat(void) const {
    return (float)_fixedPointVal / (1 << _fractBits);
}

int Fixed::toInt(void) const {
    return _fixedPointVal >> _fractBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
    o << rhs.toFloat();
    return o;
}


