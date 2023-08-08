/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:25:58 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:41:08 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
	std::cout << "AMateria Default Constructor called" << std::endl;
};

AMateria::AMateria(std::string const & type): _type(type){
	std::cout << "AMateria Default with param Constructor called" << std::endl;
};

AMateria::AMateria(const AMateria &original): _type(original._type){
	std::cout << "AMateria Copy Constructor called" << std::endl;
};

AMateria::~AMateria(){
	std::cout << "AMateria Default Destructor called" << std::endl;
};

AMateria	&AMateria::operator=(const AMateria &rhs){
	std::cout << "AMateria Assignation Constructor called" << std::endl;
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
