/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:04:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 09:40:52 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap		pandora("Pandora");

	std::cout << "===========================" << std::endl;
	pandora.guardGate();
	pandora.highFivesGuys();
	pandora.whoAmI();
	std::cout << "===========================" << std::endl;

	return (0);
}