/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:26:27 by shamsate          #+#    #+#             */
/*   Updated: 2024/10/19 19:08:14 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack(){};
    MutantStack(const MutantStack &src) : std::stack<T, Container>(src) {};
    MutantStack &operator=(const MutantStack &rhs)
    {
        if (this != &rhs)
            std::stack<T, Container>::operator=(rhs);
        return *this;
    }
    ~MutantStack() {}

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin()
    {
        return  this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
//These const versions allow iteration over a MutantStack that is declared as const,
// providing access to read elements without modifying them.
    const_iterator begin() const
    {
        return this->c.begin();
    }

    const_iterator end() const
    {
        return this->c.end();
    }
};


#endif