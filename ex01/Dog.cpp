/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:51:15 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 15:13:09 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
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
	delete this->brain;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << type << "operstor called\n";
	return(*this);
}

Dog::~Dog(void)
{
	delete this->brain;
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