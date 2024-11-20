/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 04:00:05 by shamsate          #+#    #+#             */
/*   Updated: 2024/08/08 22:22:20 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <random>
#include <iostream>

int randomnum()
{
    std::srand(std::time(0));
    return (std::rand() % 3);
}

Base *generate(void)
{
    int num = randomnum();
    if (num == 0)
    {
        std::cout << "A has been created" << std::endl;
        return (new A);
    }
    else if (num == 1)
    {
        std::cout << "B has been created" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "C has been created" << std::endl;
        return (new C);
    }
}

void identify_from_pointer(Base *p)
{
    if (dynamic_cast<A *>(p) && dynamic_cast<A *>(p) != NULL) 
        std::cout << "The type of the object p(pointer) is : A" << std::endl;
    else if (dynamic_cast<B *>(p) && dynamic_cast<B *>(p) != NULL)
        std::cout << "The type of the object p(pointer) is : B" << std::endl;
    else if (dynamic_cast<C *>(p) && dynamic_cast<C *>(p) != NULL)
        std::cout << "The type of the object p(pointer) is : C" << std::endl;
    else
        std::cout << "Unknown: No one was the type of p(pointer)" << std::endl;
}

void identify_from_reference(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "The type of the object p(reference) is : A" << std::endl;
    }
    catch (std::bad_cast &bc)
    {
        try
        {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "The type of the object p(reference) is : B" << std::endl;
        }
        catch (std::bad_cast &bc)
        {
            try
            {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "The type of the object p(reference) is : C" << std::endl;
            }
                catch (std::bad_cast &bc)
                {
                    std::cout << "Unknown: No one was the type of p(reference)" << std::endl;
            }
        }
    }
}