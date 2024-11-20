/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:45:11 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/13 23:40:58 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >

class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array() : _array(NULL), _size(0) {}
        Array(unsigned int n) : _array(new T[n]), _size(n) {}
        Array(Array const &src) : _array(NULL), _size(0) { *this = src; }
        ~Array() { delete [] _array; }
        Array &operator=(Array const &src)
        {
            if (this != &src)
            {
                delete [] _array;
                _array = new T[src._size];
                for (unsigned int i = 0; i < src._size; i++)
                    _array[i] = src._array[i];
                _size = src._size;
            }
            return *this;
        }
        T &operator[](unsigned int i)
        {
            if (i >= _size)
                throw "Error: Out of bounds";
            return _array[i];
        }

        T const &operator[](unsigned int i) const
        {
            if (i >= _size)
                throw "Error: Out of bounds";
            return _array[i];
        }

        unsigned int size() const { return _size; }
};

#endif