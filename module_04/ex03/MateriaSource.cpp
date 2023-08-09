/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:48:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/09 15:40:11 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _nbMaterias(0){
	#ifdef DEBUG
		std::cout << " MateriaSource Default Constructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
		_materias[i] = NULL;
};

MateriaSource::MateriaSource(const MateriaSource &original): _nbMaterias(original.getNbMaterias()){
	#ifdef DEBUG
		std::cout << " MateriaSource Copy Constructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
	{
		if (original._materias[i])
			_materias[i] = original._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
};

MateriaSource::~MateriaSource(){
	#ifdef DEBUG
		std::cout << " MateriaSource Default Destructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
};

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs){
	#ifdef DEBUG
		std::cout << " MateriaSource Assignation Constructor called" << std::endl;
	#endif
	if (this != &rhs)
	{
		_nbMaterias = rhs.getNbMaterias();
		for (int i = 0; i < MATERIA_MAX; i++)
		{
			if (rhs._materias[i])
				_materias[i] = rhs._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return(*this);
};

void	MateriaSource::learnMateria(AMateria* m){
	if (_nbMaterias < 4)
    {
        _materias[_nbMaterias] = m;
        _nbMaterias++;
    }
};

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i  < _nbMaterias; i++)
	{
		if(_materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (NULL);
};

int	MateriaSource::getNbMaterias()  const{
	return (_nbMaterias);
};