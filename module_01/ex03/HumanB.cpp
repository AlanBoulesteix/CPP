/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:39:14 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/20 19:05:35 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name){
	
};

HumanB::~HumanB(){
	
};

void	HumanB::attack(void){
	std::string	weaponName;
	
	weaponName = !_weapon ? "BareHands" : _weapon->getType();
	std::cout << _name << " attacks with their " << weaponName << std::endl;
};

void	HumanB::setWeapon(Weapon *weapon){
	_weapon = weapon;
};
