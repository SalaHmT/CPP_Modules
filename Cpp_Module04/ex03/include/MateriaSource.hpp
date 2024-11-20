/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:06:15 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:39:14 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{

    private:
        AMateria* _materias[4];

    public:
        MateriaSource();
        MateriaSource( MateriaSource const & src );
        ~MateriaSource();

        MateriaSource &		operator=( MateriaSource const & rhs );

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

};

#endif
