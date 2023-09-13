/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/13 17:34:55 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main()
{
	std::string	input;
	
	while (1)
	{
		std::cout << "Enter input: " ;
		std::getline(std::cin,input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "CTL-D received" << std::endl 
				<< "Programe will close" << std::endl;
			return (0);
		}
		ScalarConverter::convert(input);
		std::cout << "================" << std::endl;
	}
	return (0);
}