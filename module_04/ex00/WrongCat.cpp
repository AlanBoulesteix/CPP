/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:53 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/01 23:01:29 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal"

WrongAnimal::WrongAnimal(): _type("WrongType"){
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
};

WrongAnimal::WrongAnimal( std::string type ): _type(type){
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &original): _type(original._type){
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    
};

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Default Destructor called" << std::endl;
    
};

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &rhs){
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
};

