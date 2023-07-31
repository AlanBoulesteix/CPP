/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 16:36:49 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ClapTrap	alan("Alan");
	ScavTrap	beauJack("Beau Jack");
	FragTrap	zero("Zero");

	std::cout << "===========================" << std::endl;
	alan.attack("Beau Jack");
	beauJack.takeDamage(alan.getDamage());
	beauJack.attack("Zero");
	zero.takeDamage(beauJack.getDamage());
	zero.attack("Alan");
	alan.takeDamage(zero.getDamage());
	std::cout << "===========================" << std::endl;
	beauJack.guardGate();
	zero.highFivesGuys();
	std::cout << "===========================" << std::endl;

	return (0);
}