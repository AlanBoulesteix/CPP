/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:27:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 15:30:13 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", false, 145, 137), _target("Random"){
	
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
	
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", false, 145, 137), _target(target){
	
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src)
:  AForm(src.getName(), src.getState(), src.getLvlforSign(), src.getLvlforExc()), _target(src.getName())
{
	
};

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs){
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
};

void	DrawTree(std::string target)
{
	std::ofstream	outfile;
	outfile.open((target + "_shrubbery").c_str());
	outfile <<"                                  # #### ####" << std::endl
		<< "                                ### \\/#|### |/####" << std::endl
		<< "                               ##\\/#/ \\||/##/_/##/_#" << std::endl
		<< "                             ###  \\/###|/ \\/ # ###" << std::endl
		<< "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl
		<< "                          ## #### # \\ #| /  #### ##/##" << std::endl
		<< "                           __#_--###`  |{,###---###-~" << std::endl
		<< "                                     \\ }{" << std::endl
		<< "                                      }}{" << std::endl
		<< "                                      }}{" << std::endl
		<< "                                      {{}" << std::endl
		<< "                                , -=-~{ .-^- _" << std::endl
		<< "                                      `}" << std::endl
		<< "                                       {" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getState() && executor.getGrade() <= this->getLvlforExc())
		DrawTree(_target);
	else
		throw AForm::GradeTooLowException();
}