/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:53:13 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:37:44 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name), _nbMateria(0){
	
};

Character::Character(const Character &original){
	
};

Character::~Character(){
	
};

std::string const	&Character::getName(){
	
};

void	Character::equip(AMateria* m){
	
};

void	Character::unequip(int idx){
	
};

void	Character::use(int idx, ICharacter& target){
	
};

int	Character::getNbMateria() const{
	
};
