/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 06:18:58 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/07 20:23:56 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

struct Data;

class Serializer
{
public :

    static uintptr_t serialize(Data * ptr);
    static Data *deserialize(uintptr_t raw);
private:

    Serializer();
    Serializer(const Serializer &src);
    Serializer &operator=(const Serializer &rhs);
    ~Serializer();
};
struct Data
{
    int n;
    int n2;
    char c;
};

#endif