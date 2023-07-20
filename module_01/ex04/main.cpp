/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:17:22 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/20 19:48:50 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <ostream>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream	file;
	std::string		buf;
	
	(void)av;
	if (ac != 4)
		std::cout << "Error" << std::endl
				<< "Wrong amount of arguments" << std::endl;
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error" << std::endl
				<< "Something went wrong with input file" << std::endl;
		return (1);
	}
	while (!file.eof())
	{
		std::getline(file, buf);
		std::cout << buf << std::endl;
	}
}