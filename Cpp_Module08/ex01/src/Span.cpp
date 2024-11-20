/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:15:11 by shamsate          #+#    #+#             */
/*   Updated: 2024/10/19 18:53:55 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
//Default constructor initializes _n (max size) to 0.
Span::Span()
{
    _n = 0;
}
//Parameterized constructor sets _n based on input.
Span::Span(unsigned int n)
{
    _n = n;
}
//Copy constructor duplicates another Span object
Span::Span(Span const & src)
{
    *this = src;
}
//Copies the values of _n and _vec from another Span.
Span & Span::operator=(Span const & rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _vec = rhs._vec;
    }
    return *this;
}
//Default destructor; no specific cleanup is needed.
Span::~Span()
{
}
//Adds a number to _vec if there is space; throws an exception if full.
void Span::addNumber(int n)
{
    if (_vec.size() < _n)
        _vec.push_back(n);
    else
        throw "The vector is full";
}
//The shortestSpan() function calculates the smallest difference between
// any two numbers in the _vec vector of the Span
int Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw "The vector is too short";
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}
//The longestSpan() function calculates the largest difference between
// the maximum and minimum numbers in the _vec vector
int Span::longestSpan()
{
    if (_vec.size() < 2)
        throw "The vector is too short";
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}
//Adds a range of numbers from iterators to _vec, ensuring the total size does not exceed _n.
void Span::addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_vec.size() + std::distance(begin, end) > _n)
        throw "The vector is full";
    _vec.insert(_vec.end(), begin, end);
}

