/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:34:45 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 13:42:55 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "define " << type << " default constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "define WrongAnimal copy constructor\n";
	return;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << type << "operator called\n";
	return(*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "define WrongAnimal deconstructor\n";
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal make sound\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}