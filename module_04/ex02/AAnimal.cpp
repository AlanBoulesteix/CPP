/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:35 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 17:26:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ):_type("Random AAnimal"){
	std::cout << "Default AAnimal Constructor called" << std::endl;
};

AAnimal::AAnimal( std::string type ): _type(type) {
	std::cout << "Default AAnimal Constructor called" << std::endl;
};

AAnimal::AAnimal( const AAnimal &original ): _type(original._type){
	std::cout << "Copy AAnimal Constructor called" << std::endl;
};

AAnimal::~AAnimal( void ){
	std::cout << "Default AAnimal Destructor called" << std::endl;
};

std::string		AAnimal::getType( void ) const {
	return (_type);
};

AAnimal&	AAnimal::operator=( const AAnimal &rhs ){
	std::cout << "AAnimal Assignation called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
};
