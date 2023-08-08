/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:19:38 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:20:56 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
	std::cout << "Default Constructor called" << std::endl;
};

Cure::Cure(const Cure &original): AMateria("cure"){
	std::cout << "Copy Constructor AMateria called" << std::endl;
};

Cure::~Cure(){
	std::cout << "Default Destructor AMateria called" << std::endl;
};

Cure	&Cure::operator=(const Cure &rhs){
	std::cout << "Assignation Constructor AMateria called" << std::endl;
	if (this != &rhs)
		_type = "cure";
	return (*this);
};

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds **" << std::endl;
};
