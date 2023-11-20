/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:39:35 by asaber            #+#    #+#             */
/*   Updated: 2023/11/21 00:03:21 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp_ice = NULL;
	AMateria* tmp_cure = NULL;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp_ice = src->createMateria("ice");
	me->equip(tmp_ice);
	tmp_cure = src->createMateria("cure");
	me->equip(tmp_cure);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	delete tmp_ice;
	tmp_ice = NULL;
	delete tmp_cure;
	tmp_cure = NULL;
	delete bob;
	delete me;// << here is an error!! use while(1){} before and after
	delete src;
	return 0;
}


/*IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp_ice = NULL;
	AMateria* tmp_cure = NULL;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp_ice = src->createMateria("ice");
	me->equip(tmp_ice);
	tmp_cure = src->createMateria("cure");
	me->equip(tmp_cure);
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	delete tmp_ice;
	tmp_ice = NULL;
	delete tmp_cure;
	tmp_cure = NULL;
	delete bob;
	delete me;
	delete src;
	return 0;*/