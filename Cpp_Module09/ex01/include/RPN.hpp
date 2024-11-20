/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:19:07 by shamsate          #+#    #+#             */
/*   Updated: 2024/11/11 15:19:31 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <stack>

class Rpn {

private :
    std::stack<float> _stack;
public :
    Rpn();
    ~Rpn();
    Rpn(const Rpn &src);
    Rpn &operator=(const Rpn & src);
    float   getTop();
    int Reverse_pol_Not(std::string &src);
};

#endif