/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/04 11:55:59 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void){
	ClapTrap	lilith("Lilith");
	ScavTrap	beauJack("Beau Jack");
	ClapTrap	zed(ScavTrap("Dr. Zed"));

	std::cout << "=========================================" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
			beauJack.guardGate();
		else
		{
			beauJack.attack("Lilith");
			lilith.takeDamage(beauJack.getDamage());
		}
		if (i % 2)
			lilith.beRepaired(0);
		else
		{
			lilith.attack("Beau Jack");
			beauJack.takeDamage(lilith.getDamage());
		}
		std::cout << "=========================================" << std::endl;
	}
	zed.attack("Beau Jack");
	beauJack.takeDamage(zed.getDamage());
	std::cout << "=========================================" << std::endl;
}