/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:53 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/03 13:40:02 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat Constructor called" << std::endl;
	
};

WrongCat::WrongCat(const WrongCat &original): WrongAnimal(original._type){
	std::cout << "Default WrongCat Constructor called" << std::endl;
	
};

WrongCat::~WrongCat(){
	std::cout << "Copy WrongCat Constructor called" << std::endl;
};

WrongCat&	WrongCat::operator=(const WrongCat &rhs){
	if (this != &rhs)
		_type = rhs._type;
	return (*this);

};

void	WrongCat::makeSound() const {
	std::cout << _type << ": WOOF WOOF" << std::endl;
};

	