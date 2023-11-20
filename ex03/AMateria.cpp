/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:41:33 by asaber            #+#    #+#             */
/*   Updated: 2023/11/20 20:01:38 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("default")
{
}

AMateria::AMateria(std::string const & type): _type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria& other): _type(other._type)
{
}

AMateria& AMateria::operator = (const AMateria& other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	//std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

