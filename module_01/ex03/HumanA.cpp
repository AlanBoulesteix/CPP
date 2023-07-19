/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:39:12 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 18:15:04 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _weapon(weapon){
	
};

HumanA::~HumanA(){
	
};

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
};
