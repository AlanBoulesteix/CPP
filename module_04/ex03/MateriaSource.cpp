/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:48:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:33:06 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

static int	ft_pow(int nb, int power){
	for (int i = 0; i < power; i++)
		nb *= nb;
	return (nb);
}

MateriaSource::MateriaSource(): _nbMaterias(0), _nbSavedMaterias(0), _sizeMemory(2){
	#ifdef DEBUG
		std::cout << " MateriaSource Default Constructor called" << std::endl;
	#endif
	for (int i = 0; i < MATERIA_MAX; i++)
		_materias[i] = NULL;
	_savedMaterias = new AMateria*[ft_pow(2, _sizeMemory)];
	for (int i = 0; i < ft_pow(2, _sizeMemory); i++)
		_savedMaterias[i] = NULL;
};

MateriaSource::MateriaSource(const MateriaSource &original):
	_nbMaterias(original.getNbMaterias()), 
	_nbSavedMaterias(original.getNbSavedMateria()), 
	_sizeMemory(original.getSizeMemory()){

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
	_savedMaterias = new AMateria*[ft_pow(2, _sizeMemory)];
	for (int i = 0; i < ft_pow(2, _sizeMemory); i++)
	{
		if (original._savedMaterias[i])
			_savedMaterias[i] = original._savedMaterias[i]->clone();
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
	for (int i = 0; i < ft_pow(2, _sizeMemory); i++)
		if (_savedMaterias[i])
			delete _savedMaterias[i];
	delete [] _savedMaterias;
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
	if (_nbMaterias < MATERIA_MAX)
	{
		_materias[_nbMaterias] = m;
		_nbMaterias++;
	}
};

AMateria*	MateriaSource::createMateria(std::string const & type){
	AMateria*	clone;
	
	for (int i = 0; i  < _nbMaterias; i++)
	{
		if(_materias[i]->getType() == type)
		{
			clone = _materias[i]->clone();
			addSavedMateria(clone);
			return (clone);
		}
	}
	return (NULL);
};

int	MateriaSource::getNbMaterias()  const{
	return (_nbMaterias);
};

void	MateriaSource::addSavedMateria(AMateria* m){
	AMateria**	dup;
	
	if(_nbSavedMaterias >= ft_pow(2, _sizeMemory))
	{
		_sizeMemory++;
		dup = new AMateria*[ft_pow(2, _sizeMemory)];
		for (int i =0; i < ft_pow(2, _sizeMemory); i++)
		{
			if (_savedMaterias[i])
				dup[i] = _savedMaterias[i];
			else
				dup[i] = NULL;
		}
		delete [] _savedMaterias;
		_savedMaterias = dup;
		_savedMaterias[_nbSavedMaterias] = m;
	}
	else
		_savedMaterias[_nbSavedMaterias] = m;
	_nbSavedMaterias++;
};

AMateria**	MateriaSource::getSavedMateria() const{
	return (_savedMaterias);
};

int	MateriaSource::getNbSavedMateria() const{
	return (_nbSavedMaterias);
};

int	MateriaSource::getSizeMemory() const{
	return(_sizeMemory);
};