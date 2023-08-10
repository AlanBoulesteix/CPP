/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:24:22 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:31:20 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria *tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	bob->equip(tmp);
	std::cout << "===========================" << std::endl;
	bob->use(1, *me);
	me->use(1, *bob);
	std::cout << "===========================" << std::endl;
	me->unequip(1);
	me->equip(tmp);
	me->unequip(0);
	me->equip(tmp);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}