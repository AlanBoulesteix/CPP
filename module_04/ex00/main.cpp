/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:09:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 15:14:01 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "================CONSTRUCTOR======================" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
		
	std::cout << "==================METHODES======================" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "================DESTRUCTOR===================" << std::endl;
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "================CONSTRUCTOR======================" << std::endl;
	const WrongAnimal* wA = new WrongAnimal();
	const WrongAnimal* wC = new WrongCat();
	std::cout << "==================METHODES======================" << std::endl;
	wA->makeSound();
	wC->makeSound();
	delete wA;
	delete wC;
	std::cout << "================DESTRUCTOR===================" << std::endl;
	
	return 0;
}