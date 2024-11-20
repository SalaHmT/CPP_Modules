/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:57:23 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/15 14:13:10 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) : _fixedPointVal(0) {}

Fixed::Fixed( Fixed const &src) {*this = src;}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const {return _fixedPointVal;}

void Fixed::setRawBits(int const raw) {_fixedPointVal = raw;}

Fixed & Fixed::operator=( Fixed const &rhs) {
    this->setRawBits(rhs._fixedPointVal);
    return (*this);
}

Fixed::Fixed(const int val) {
    _fixedPointVal = val << _fractBits;
    this->setRawBits(_fixedPointVal);
}
Fixed::Fixed(const float val) {
    _fixedPointVal = roundf(val * (1 << _fractBits));
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

Fixed Fixed::operator+(Fixed const &Fixed) {
    return (this->toFloat() + Fixed.toFloat());
}

Fixed Fixed::operator-(Fixed const &Fixed) {
    return (this->toFloat() - Fixed.toFloat());
}

Fixed Fixed::operator/(Fixed const &Fixed) {
    return (this->toFloat() / Fixed.toFloat());
}

Fixed Fixed::operator*(Fixed const &Fixed) {
    return (this->toFloat() * Fixed.toFloat());
}

Fixed Fixed::operator++() {
    this->_fixedPointVal++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator--() {
    this->_fixedPointVal--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

bool Fixed::operator<(Fixed const &fixed) const {
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>(Fixed const &fixed) const {
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<=(Fixed const &fixed) const {
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator>=(Fixed const &fixed) const {
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator!=(Fixed const &fixed) const {
    return (this->toFloat() != fixed.toFloat());
}

bool Fixed::operator==(Fixed const &fixed) const {
    return (this->toFloat() == fixed.toFloat());
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1 < fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::min(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1 < fixed2)
        return((Fixed&) fixed1);
    return ((Fixed&) fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
    if (fixed1 > fixed2)
        return(fixed1);
    return (fixed2);
}

Fixed &Fixed::max(Fixed const &fixed1, Fixed const &fixed2) {
    if (fixed1 > fixed2)
        return((Fixed&)fixed1);
    return ((Fixed&) fixed2);
}