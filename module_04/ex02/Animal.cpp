/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:35 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 13:51:43 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ):_type("Random Animal"){
	std::cout << "Default Animal Constructor called" << std::endl;
};

Animal::Animal( std::string type ): _type(type) {
	std::cout << "Default Animal Constructor called" << std::endl;
};

Animal::Animal( const Animal &original ): _type(original._type){
	std::cout << "Copy Animal Constructor called" << std::endl;
};

Animal::~Animal( void ){
	std::cout << "Default Animal Destructor called" << std::endl;
};

