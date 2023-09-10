/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:39:50 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/10 07:46:22 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardonForm", false, 25, 5), _target("Random"){
	
};

PresidentialPardonForm::~PresidentialPardonForm(){
	
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", false, 25, 5), _target(target){
	
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src)
:  AForm(src.getName(), src.getState(), src.getLvlforSign(), src.getLvlforExc()), _target(src.getName())
{
	
};

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs){
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
};

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getState() && executor.getGrade() <= this->getLvlforExc())
            std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw AForm::GradeTooLowException();
}