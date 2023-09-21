/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:14:40 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/21 10:46:56 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int>	tabDeInt;

	try {
		for (int i = 0; i < 49; ++i)
			tabDeInt.push_back(i);
		std::vector<int>::iterator r;
		r = easyfind(tabDeInt, 4);
		std::cout << "nb located = " << *r << std::endl;
		r = easyfind(tabDeInt, 48);
		std::cout << "nb located = " << *r << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}