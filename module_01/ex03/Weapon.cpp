/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:01:57 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 17:38:49 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){

};

Weapon::Weapon(std::string type):_type(type){

};

Weapon::~Weapon(){

};

std::string	Weapon::getType(void){
	return (_type);	
};

void	Weapon::setType(std::string type){
	_type = type;
};
