/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:04:41 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 15:15:03 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "define " << type << " default constructor\n";
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << "define default constructor\n";
	return;
}

Animal& Animal::operator = (const Animal& other)
{
	this->type = other.type;
	std::cout << type << "operstor called\n";
	return(*this);
}

Animal::~Animal(void)
{
	std::cout << "define Animal deconstructor\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal make sound\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}