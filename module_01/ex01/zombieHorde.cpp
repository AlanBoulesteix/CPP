/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:08:53 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 14:07:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde(int N, std::string name){
	Zombie* zombies;
	int		i;
	
	zombies = new (std::nothrow) Zombie[N];
	if (!zombies)
		return (NULL);
	i = -1;
	while (++i < N)
		zombies[i].setName(name);
	return (zombies);
};