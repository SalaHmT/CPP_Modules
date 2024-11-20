/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate < shamsate@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:24:56 by shamsate          #+#    #+#             */
/*   Updated: 2024/02/19 21:42:26 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    *this = src;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        this->_materias[i] = NULL;
    }
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
    if ( this != &rhs )
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materias[i])
                delete this->_materias[i];
            this->_materias[i] = rhs._materias[i]->clone();
        }
    }
    return *this;
}

void    MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i] && m)
        {
            this->_materias[i] = m->clone();
            break;
        }
    }
    delete m;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
            return this->_materias[i]->clone();
    }
    return NULL;
}


