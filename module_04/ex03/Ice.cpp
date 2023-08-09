/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:19:40 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/09 15:32:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
	#ifdef DEBUG
		std::cout << " Ice Default Constructor called" << std::endl;
	#endif
};

Ice::Ice(const Ice &original): AMateria("ice"){
	#ifdef DEBUG
		std::cout << " Ice Copy Constructor called" << std::endl;
	#endif
	(void)original;
};

Ice::~Ice(){
	#ifdef DEBUG
		std::cout << " Ice Default Destructor called" << std::endl;
	#endif
};

Ice	&Ice::operator=(const Ice &rhs){
	#ifdef DEBUG
		std::cout << " Ice Assignation Constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_type = "ice";
	return (*this);
};

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};

AMateria	*Ice::clone() const{
	return (new Ice(*this));
};