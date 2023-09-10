/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/10 07:47:56 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	ShrubberyCreationFormOk()
{
	Bureaucrat axel("Axel", 1);
	ShrubberyCreationForm home("Home");
	try 
	{
		axel.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		axel.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ShrubberyCreationFormKo()
{
	Bureaucrat axel("Axel", 150);
	ShrubberyCreationForm home("Home");
	try 
	{
		axel.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		axel.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	RobotomyRequestFormOk()
{
	Bureaucrat pjay("Pjay", 72);
	Bureaucrat axel("Pjay", 45);
	RobotomyRequestForm home("Home");
	try 
	{
		pjay.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		pjay.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		axel.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	RobotomyRequestFormKo()
{
	Bureaucrat pjay("Pjay", 148);
	RobotomyRequestForm home("Home");
	try 
	{
		pjay.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		pjay.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	PresidentialPardonFormOk()
{
	Bureaucrat pjay("Pjay", 5);
	PresidentialPardonForm home("Home");
	try 
	{
		pjay.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		pjay.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "=========================" << std::endl;
	ShrubberyCreationFormOk();
	std::cout << "=========================" << std::endl;
	ShrubberyCreationFormKo();
	std::cout << "=========================" << std::endl;
	RobotomyRequestFormKo();
	std::cout << "=========================" << std::endl;
	RobotomyRequestFormOk();
	std::cout << "=========================" << std::endl;
	PresidentialPardonFormOk();
	std::cout << "=========================" << std::endl;

}
