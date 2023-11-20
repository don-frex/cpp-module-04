/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:54:40 by asaber            #+#    #+#             */
/*   Updated: 2023/11/19 18:06:59 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "define " << type << " default constructor\n";
}

Cat::Cat(const Cat& other)
{
	*this = other;
	std::cout << "define default constructor\n";
	return;
}

Cat& Cat::operator = (const Cat& other)
{
	this->type = other.type;
	std::cout << type << "operstor called\n";
	return(*this);
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "define deconstructor\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "meow\n";
}

std::string	Cat::getType(void) const
{
	return (this->type);
}