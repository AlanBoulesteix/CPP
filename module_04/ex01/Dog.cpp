/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:19:21 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/03 10:54:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"){
	std::cout << "Default Dog Constructor called" << std::endl;
};

Dog::Dog( const Dog &original ): Animal(original._type){
	std::cout << "Copy Dog Constructor called" << std::endl;
};

Dog::~Dog( void ){
	std::cout << "Default Dog Destructor called" << std::endl;
};


Dog&	Dog::operator=( const Dog &rhs ){
	std::cout << "Dog Assignation called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
};

void	Dog::makeSound( void ) const {
	std::cout << _type << ": WOOF WOOF" << std::endl;
};
