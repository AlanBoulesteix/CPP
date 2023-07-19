/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:08:35 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 09:52:51 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = newZombie("Foo");
	randomChump("Boo");
	zombie->announce();
	delete zombie;
	return (0);
}