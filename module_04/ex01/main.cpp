/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:09:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/18 14:25:24 by aboulest         ###   ########.fr       */
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
	std::cout << std::endl << "=============CONSTRUCTOR PART I=============" << std::endl;
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
	std::cout << std::endl << "===============SOUND=================" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
		listAnimal[i]->makeSound();
	std::cout << std::endl << "================DESTRUCTOR PART I====================" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
		delete listAnimal[i];
	delete[]	listAnimal;
	std::cout << std::endl << "=============CONSTRUCTOR COPY PROFONDE=============" << std::endl;
	Cat		*chat = new Cat();
	chat->getBrain()->addIdea("Test");
	Cat		chat2 = *chat;
	std::cout << std::endl << "=============DESTRUCTOR CAT PART I==============" << std::endl;
	delete	chat;
	std::cout << std::endl << "=================PRINT IDEAS===============" << std::endl;
	chat2.getBrain()->printIdeas();
	std::cout << std::endl << "===================DESTRUCTOR CAT PART II==============" << std::endl;
	return 0;
}