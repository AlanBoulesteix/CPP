/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:05:47 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 12:30:19 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <string>

void	exitCTLD(){
	std::cout << std::endl
			<< "CTL-D pressed" << std::endl
			<< "Progame will close" << std::endl;
	exit(EXIT_FAILURE);
};

void	newFailure(){
	std::cout << "New failed" << std::endl;
	exit(EXIT_FAILURE);
};

int	askForInput(void){
	
	int			N;
	std::string	input;
	
	while (1)
	{
		std::cout << "Please enter number of zombies wanted: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exitCTLD();
		N = atoi(input.c_str());
		if (!N)
			std::cout << "You put 0 or something alpha, please try again" << std::endl;
		else
			break;
	}
	return (N);
};

int	main(void){

	int			N;
	int			i;
	Zombie*		zombies;
	
	N = askForInput();
	zombies = zombieHorde(N, "Zombax");
	if (!zombies)
		newFailure();
	i = -1;
	while (++i < N)
		zombies[i].annouce();
	delete [] zombies;
};