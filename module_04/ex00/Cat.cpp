/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:19:30 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 13:20:02 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"){
	std::cout << "Default Cat Constructor called" << std::endl;
};

Cat::Cat( const Cat &original ): Animal(original._type){
	std::cout << "Copy Cat Constructor called" << std::endl;
};

Cat::~Cat( void ){
	std::cout << "Default Cat Destructor called" << std::endl;
};


Cat&	Cat::operator=( const Cat &rhs ){
	std::cout << "Cat Assignation called" << std::endl;
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
};

void	Cat::makeSound( void ){
	std::cout << "MIAOU MIAOU" << std::endl;
};