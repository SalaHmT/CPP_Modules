/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 06:19:01 by shamsate          #+#    #+#             */
/*   Updated: 2024/07/29 06:23:40 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer(){};

Serializer::Serializer(const Serializer &src)
{
    *this = src;
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

Serializer::~Serializer(){};

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

