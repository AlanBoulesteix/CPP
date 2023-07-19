/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:11:49 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 09:34:15 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>


Zombie::Zombie(std::string name):_name(name){
	
};

Zombie::~Zombie(){
	std::cout << this->_name <<	" is destroyed" << std::endl;
};

void	Zombie::announce(void){
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};