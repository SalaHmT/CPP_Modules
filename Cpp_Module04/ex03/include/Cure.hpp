/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:05:57 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:12:18 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure( Cure const & src );
        ~Cure();

        Cure &		operator=( Cure const & rhs );

        AMateria*	clone() const;
        void		use( ICharacter& target );
};

#endif /* *********************************************************** CURE_H */