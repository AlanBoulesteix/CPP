/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:00:39 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 13:59:17 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap	alan("Alan");
	ClapTrap	beauJack("Beau Jack");
	ClapTrap	beauJack2(beauJack);

	std::cout << "=========================================" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		beauJack.attack("Alan");
		alan.takeDamage(0);
		alan.beRepaired(0);
		std::cout << "=========================================" << std::endl;
	}
}