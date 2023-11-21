/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:15:51 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 11:46:56 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& other);
		Animal& operator = (const Animal& other);
		virtual ~Animal(void);
		virtual void	makeSound(void) const;
		virtual std::string	getType(void) const;
};

#endif