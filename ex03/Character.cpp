/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:44:24 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 00:22:38 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("default")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->floor[i] = NULL;
	}
}

Character::Character(std::string const & name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->floor[i] = NULL;
	}
}

Character::Character(const Character &src): _name(src._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->floor[i])
			delete this->floor[i];
		this->_inventory[i] = src._inventory[i]->clone();
		this->floor[i] = src.floor[i]->clone();
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->floor[i])
			delete this->floor[i];
	}
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = rhs._inventory[i];
			if (this->floor[i])
				delete this->floor[i];
			this->floor[i] = rhs.floor[i];
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m->clone();
				break;
			}
		}
		for (int j = 0; j < 4; j++)
		{
			if (this->floor[j])
				delete this->floor[j];
		}	
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->floor[i])
			{
				this->floor[i] = this->_inventory[idx];
				break;
			}
		}
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3))
	{
		std::cout << "Invalid idx." << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		// std::cout << "MAMA" << std::endl;
	}

}
