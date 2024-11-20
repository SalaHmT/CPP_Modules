/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 06:19:05 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/08 20:23:39 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Serializer.hpp"

int main()
{
    Data data;
    data.n = 42;
    data.n2 = 21;
    data.c = 's';

    uintptr_t raw = Serializer::serialize(&data);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "n: " << ptr->n << std::endl;
    std::cout << "n2: " << ptr->n2 << std::endl;
    std::cout << "c: " << ptr->c << std::endl;

    return 0;
}