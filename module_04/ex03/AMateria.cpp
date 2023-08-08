/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:25:58 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:22:26 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
	#ifdef DEBUG
		std::cout << "AMateria Default Constructor called" << std::endl;
	#endif
};

AMateria::AMateria(std::string const & type): _type(type){
	#ifdef DEBUG
		std::cout << "AMateria Default with param Constructor called" << std::endl;
	#endif
};

AMateria::AMateria(const AMateria &original): _type(original._type){
	#ifdef DEBUG
		std::cout << "AMateria Copy Constructor called" << std::endl;
	#endif
};

AMateria::~AMateria(){
	#ifdef DEBUG
		std::cout << "AMateria Default Destructor called" << std::endl;
	#endif
};

AMateria	&AMateria::operator=(const AMateria &rhs){
	#ifdef DEBUG
		std::cout << "AMateria Assignation Constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_type = rhs.getType();
	return (*this);
};

std::string const	&AMateria::getType() const{
	return (_type);
};

void	AMateria::use(ICharacter& target){
	std::cout << _type << " materia has been used on " << target.getName() << std::endl;
};
