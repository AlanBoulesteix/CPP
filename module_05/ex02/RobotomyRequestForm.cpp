/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:27:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 15:21:27 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", false, 72, 45), _target("Random"){
	
};

RobotomyRequestForm::~RobotomyRequestForm(){
	
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", false, 72, 45), _target(target){
	
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)
:  AForm(src.getName(), src.getState(), src.getLvlforSign(), src.getLvlforExc()), _target(src.getName())
{
	
};

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs){
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
};

void	robotomize(std::string target)
{
	std::cout << "🎵 DRILING NOISES 🎵" <<std::endl;
	std::srand(time(NULL));
	if ((std::rand() % 10 + 1) % 7)
		std::cout << target << " has been robotomized " << std::endl;
	else
		std::cout << " Robotomize failed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getState() && executor.getGrade() <= this->getLvlforExc())
		robotomize(_target);
	else
		throw AForm::GradeTooLowException();
}