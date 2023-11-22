/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:51:15 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 15:10:30 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "define " << type << " default constructor\n";
}

Dog::Dog(const Dog& other)
{
	*this = other;
	std::cout << "define copy constructor\n";
	return;
}

Dog& Dog::operator = (const Dog& other)
{
	this->type = other.type;
	std::cout << type << "operstor called\n";
	return(*this);
}

Dog::~Dog(void)
{
	std::cout << "define Dog deconstructor\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "howhow\n";
}

std::string	Dog::getType(void) const
{
	return (this->type);
}