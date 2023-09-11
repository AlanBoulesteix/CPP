/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/11 09:54:16 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat	jim("Jim", 2);
	Intern		alan;
	AForm		*form = NULL;
	std::string	nameForm[4] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation",
		"404"
	};

	std::cout << "===========================" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		try {
			form = alan.makeForm(nameForm[i], "Random Target");
			jim.signForm(*form);
			jim.executeForm(*form);
			delete form;
			std::cout << "===========================" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
