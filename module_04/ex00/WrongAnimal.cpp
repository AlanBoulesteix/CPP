/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:47 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/03 13:43:38 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout << "Default WrongAnimal Constructor called" << std::endl;
};

WrongAnimal::WrongAnimal( std::string type ): _type(type) {
	std::cout << "Default WrongAnimal Constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &original): _type(original._type){
	std::cout << "Copy WrongAnimal Constructor called" << std::endl;
};

WrongAnimal::~WrongAnimal(){
	std::cout << "Default WrongAnimal Destructor called" << std::endl;
	
};

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &rhs){
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
};

std::string	WrongAnimal::getType( void ){
	return (_type);
};

void		WrongAnimal::makeSound( void ) const {
	std::cout << _type << ": Random wrong sound" << std::endl;
};
