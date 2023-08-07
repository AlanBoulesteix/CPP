/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:09:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 13:49:00 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	int				nbAnimal = 5;
	const Animal	**listAnimal = new const Animal*[nbAnimal];
	std::string		input;
	
	for (int i = 0; i < nbAnimal; i++)
	{
		if (i % 2)
			listAnimal[i] = new Dog();
		else
			listAnimal[i] = new Cat();
	}
	std::cout << "====================================" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
	{
		std::cout << "Insert idea: " << std::endl;
		getline(std::cin, input);
		listAnimal[i]->getBrain()->addIdea(input);
	}
	std::cout << "====================================" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
	{
		listAnimal[i]->getBrain()->printIdeas();
		listAnimal[i]->makeSound();
	}
	std::cout << "====================================" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
		delete listAnimal[i];
	delete[]	listAnimal;
	return 0;
}