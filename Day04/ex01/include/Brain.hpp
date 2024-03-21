/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 05:13:26 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 17:22:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{

    private:

        std::string _ideas[100];

    public:

        Brain();
        Brain(Brain const & src);
        Brain & operator=(Brain const & src);
        ~Brain();
};
#endif