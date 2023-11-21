/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:16:03 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 13:48:28 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator = (const WrongAnimal& other);
		virtual ~WrongAnimal(void);
		void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif