/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/04 12:13:22 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ClapTrap	lilith("Lilith");
	ScavTrap	beauJack("Beau Jack");
	FragTrap	zero("Zero");
	// ClapTrap	a = beauJack;
	// ScavTrap	b = beauJack;
	// FragTrap	c = zero;
	
	std::cout << "===========================" << std::endl;
	lilith.attack("Beau Jack");
	beauJack.takeDamage(lilith.getDamage());
	beauJack.attack("Zero");
	zero.takeDamage(beauJack.getDamage());
	zero.attack("Lilith");
	lilith.takeDamage(zero.getDamage());
	std::cout << "===========================" << std::endl;
	beauJack.guardGate();
	zero.highFivesGuys();
	std::cout << "===========================" << std::endl;

	return (0);
}