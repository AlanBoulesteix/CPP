/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/07 14:10:12 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Bureaucrate aux dents longues", 15);
		for (int i = 0; i < 15; i++)
		{
			try
			{
				a.incrementGrade();
				std::cout << a << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Bureaucrate ", 1545);
		Bureaucrat c(b);
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}