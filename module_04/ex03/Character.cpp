/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:53:13 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:34:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name), _nbMaterias(0){
	#ifdef DEBUG
		std::cout << "Character Default with param Constructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
		_materias[i] = NULL;
};

Character::Character(const Character &original): _name(original.getName()), _nbMaterias(original.getNbMateria()){
	#ifdef DEBUG
		std::cout << "Character Copy Constructor called" << std::endl;
	#endif
	for(int i = 0; i < MATERIA_MAX; i++)
	{
		if (original._materias[i])
			_materias[i] = original._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
};

Character::~Character(){
	#ifdef DEBUG
		std::cout << "Character Default Destructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
		delete _materias[i];
};

Character	&Character::operator=(const Character &rhs)
{
	#ifdef DEBUG
		std::cout << "Character Assignation Constructor called" << std::endl;
	#endif
	if (this != &rhs)
	{
		_name = rhs._name;
		_nbMaterias = rhs._nbMaterias;
		for(int i = 0; i < MATERIA_MAX; i++)
		{
			if (rhs._materias[i])
				_materias[i] = rhs._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return (*this);
}

std::string const	&Character::getName() const{
	return (_name);
};

void	Character::equip(AMateria* m){
	if (!m)
		return ;
	if (_nbMaterias == 0)
		_materias[0] = m->clone();
	else if (_nbMaterias < 4)
	{
		for (int i = 0; i < MATERIA_MAX; i++)
		{
			if (!_materias[i])
			{
				_materias[i] = m->clone();
				break;
			}
		}
	}
	_nbMaterias++;
};

void	Character::unequip(int idx){
	if (idx >= 0 && idx < MATERIA_MAX && _materias[idx])
	{
		delete _materias[idx];
		_materias[idx] = NULL;
		--_nbMaterias;
	}
	else
	{
		std::cout << "There is not any material in slot #" << idx << "." << std::endl
		<< "Therefore, you cannot unequip it." << std::endl;
	}
};

void	Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < MATERIA_MAX && _materias[idx])
		_materias[idx]->use(target);
	else
		std::cout << "There is not any material in slot #" << idx << std::endl;
};

int	Character::getNbMateria() const{
	return (_nbMaterias);
};

void	Character::printMateria() const{
	for (int i = 0; i < MATERIA_MAX; i++)
	{
		std::cout << "Slot #" << i << ": " <<
			(_materias[i] ? _materias[i]->getType() : "Empty") <<
			std::endl;
	}
};

