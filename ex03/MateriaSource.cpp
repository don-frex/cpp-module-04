/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:56:30 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 12:25:42 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{
		this->_materia[i] = src._materia[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_materia[i];
			this->_materia[i] = rhs._materia[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m->clone();
			break;
		}
	}
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
		{
			return (this->_materia[i]->clone());
		}
	}
	return (NULL);
}