/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:43:30 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 13:05:54 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		AMateria *unequiped[4];
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif