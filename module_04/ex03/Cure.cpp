/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:19:38 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:35:59 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
	#ifdef DEBUG
		std::cout << " Cure Default Constructor called" << std::endl;
	#endif
};

Cure::Cure(const Cure &original): AMateria("cure"){
	#ifdef DEBUG
		std::cout << " Cure Copy Constructor called" << std::endl;
	#endif
};

Cure::~Cure(){
	#ifdef DEBUG
		std::cout << " Cure Default Destructor called" << std::endl;
	#endif
};

Cure	&Cure::operator=(const Cure &rhs){
	#ifdef DEBUG
		std::cout << " Cure Assignation Constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_type = "cure";
	return (*this);
};

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds **" << std::endl;
};

AMateria	*Cure::clone() const{
	return (new Cure(*this));
};
