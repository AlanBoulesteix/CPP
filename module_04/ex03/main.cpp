/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:24:22 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/09 18:10:49 by aboulest         ###   ########.fr       */
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
	AMateria *tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete (tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	delete bob;
	delete me;
	delete src;
	return 0;
}