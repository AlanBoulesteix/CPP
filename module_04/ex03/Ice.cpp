/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:19:40 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:20:33 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
	std::cout << "Default Constructor called" << std::endl;
};

Ice::Ice(const Ice &original): AMateria("ice"){
	std::cout << "Copy Constructor AMateria called" << std::endl;
};

Ice::~Ice(){
	std::cout << "Default Destructor AMateria called" << std::endl;
};

Ice	&Ice::operator=(const Ice &rhs){
	std::cout << "Assignation Constructor AMateria called" << std::endl;
	if (this != &rhs)
		_type = "ice";
	return (*this);
};

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
