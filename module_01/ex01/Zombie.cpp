/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:06:02 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 13:57:15 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
		std::cout << "A new zombi is born" << std::endl;
};

Zombie::Zombie(std::string name):_name(name){
		
};

Zombie::~Zombie(void){
	std::cout << this->_name << " is destroyed" << std::endl;
};

void	Zombie::annouce(void){
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;	
};

void	Zombie::setName(std::string name){
	_name = name;
};