/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:42:08 by asaber            #+#    #+#             */
/*   Updated: 2023/11/18 19:42:44 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "define Brain default constructor\n";
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "define Brain copy constructor\n";
	return;
}

Brain& Brain::operator = (const Brain& other)
{
	this->ideas = other.ideas;
	std::cout << "Brain operstor called\n";
	return(*this);
}

Brain::~Brain(void)
{
	std::cout << "define Brain deconstructor\n";
}

void	Brain::setIdeas(std::string idea, int index)
{
	this->ideas[index] = idea;
}

std::string	Brain::getIdeas(int index) const
{
	return (this->ideas[index]);
}
