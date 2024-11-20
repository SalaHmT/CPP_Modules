/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:13:25 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/24 16:29:50 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _vec;

public:

    Span();
    Span(unsigned int n);
    Span(const Span & src);
    Span & operator=(const Span & rhs);
    ~Span();

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void addRangeOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif