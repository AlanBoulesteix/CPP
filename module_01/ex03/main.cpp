/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:06:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/20 19:11:05 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon	w1 = Weapon("Excalibur");
	HumanA	alan("alan", w1);
	HumanB	tom("Tom");

	alan.attack();
	tom.attack();
	tom.setWeapon(&w1);
	tom.attack();
	w1.setType("kitchen knifes");
	tom.attack();
	alan.attack();
	tom.setWeapon(NULL);
	tom.attack();
	return 0;
}