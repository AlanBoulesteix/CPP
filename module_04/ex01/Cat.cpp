/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:19:30 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 23:10:16 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
	_brain = new Brain();
};

Cat::Cat( const Cat &original ): Animal(original._type){
	std::cout << "Copy Cat Constructor called" << std::endl;
	_brain = new Brain((*original.getBrain()));
};

Cat::~Cat( void ){
	std::cout << "Default Cat Destructor called" << std::endl;
	delete _brain;
};

Cat&	Cat::operator=( const Cat &rhs ){
	std::cout << "Cat Assignation called" << std::endl;
	if (this != &rhs)
	{
		_type = rhs._type;
		_brain = new Brain((*rhs.getBrain()));
	}
	return (*this);
};

void	Cat::makeSound( void ) const {
	std::cout << _type << ": MIAOU MIAOU" << std::endl;
};

Brain			*Cat::getBrain( void ) const {
	return (_brain);
};
