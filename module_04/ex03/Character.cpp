/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:53:13 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:17:16 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name), _nbMaterias(0){
    
};

Character::Character(const Character &original){
    
};

Character   &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _nbMaterias = rhs._nbMaterias;
        for(int i = 0; i < _nbMaterias; i++)
            _materias[i] = rhs._materias[i]->clone();
    }
    return (*this);
}

Character::~Character(){
	for (int i = 0; i < _nbMaterias; i++)
        delete _materias[i];
};

std::string const	&Character::getName(){
	return (_name);
};

void	Character::equip(AMateria* m){
    if (_nbMaterias != 4)
    {
        _materias[_nbMaterias] = m;
        _nbMaterias++;  
    }
};

void	Character::unequip(int idx){
    if (idx >= 0 && _nbMaterias - 1 > idx && idx < MATERIA_MAX)
    {
        --_nbMaterias;
        _materias[_nbMaterias] = NULL;
    }
    else
        std::cout << "There is not any material in slot #" << idx << "." << std::endl
                << "Therefore, you cannot unequip it." << std::endl;
};

void	Character::use(int idx, ICharacter& target){
	if (idx >= 0 && _nbMaterias - 1 > idx && idx < MATERIA_MAX)
        _materias[idx]->use(target);
    else
        std::cout << "There is not any material in slot #" << idx << std::endl;
};

int	Character::getNbMateria() const{
	return (_nbMaterias);
};
