/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:05:59 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:12:53 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice( Ice const & src );
        ~Ice();

        Ice &		operator=( Ice const & rhs );

        AMateria*	clone() const;
        void		use( ICharacter& target );
};

#endif /* ************************************************************* ICE_H */
