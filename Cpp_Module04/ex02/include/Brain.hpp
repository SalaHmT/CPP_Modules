/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:17 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 23:31:54 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "AAnimal.hpp"

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