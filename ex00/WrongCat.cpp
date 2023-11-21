/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:37:51 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 13:42:40 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "define " << type << " default constructor\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	*this = other;
	std::cout << "define WrongCat copy constructor\n";
	return;
}

WrongCat& WrongCat::operator = (const WrongCat& other)
{
	this->type = other.type;
	std::cout << type << "operator called\n";
	return(*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "define WrongCat deconstructor\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "wrongmeow\n";
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}