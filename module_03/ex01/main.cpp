/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 15:22:56 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void){
	ClapTrap	alan("Alan");
	ScavTrap	beauJack("Beau Jack");
	ClapTrap	beauJack2(beauJack);

	std::cout << "=========================================" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		beauJack.attack("Alan");
		if (i == 4)
			beauJack.guardGate();
		alan.takeDamage(beauJack.getDamage());
		alan.attack("Beau Jack");
		beauJack.takeDamage(alan.getDamage());
		alan.beRepaired(0);
		std::cout << "=========================================" << std::endl;
	}
	beauJack2.attack("Beau Jack");
	beauJack.takeDamage(beauJack2.getDamage());
	std::cout << "=========================================" << std::endl;
}