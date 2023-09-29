/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:15:51 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/28 14:53:46 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Error: Wrong amount of arguments" << std::endl;
		return (1);
	}
	try {
		PmergeMe	pmgm(av);
		
		pmgm.before();
		pmgm.after();
		pmgm.timeVector();
		pmgm.timeList();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}