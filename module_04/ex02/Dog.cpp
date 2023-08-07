/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:19:21 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 11:32:38 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"){
	std::cout << "Default Dog Constructor called" << std::endl;
	_brain = new Brain();
};

Dog::Dog( const Dog &original ): Animal(original._type){
	std::cout << "Copy Dog Constructor called" << std::endl;
};

Dog::~Dog( void ){
	std::cout << "Default Dog Destructor called" << std::endl;
	delete _brain;
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

Brain			*Dog::getBrain( void ) const {
	return (_brain);
};