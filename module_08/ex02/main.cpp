/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:38:12 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 17:44:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void	mainMutantStack()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << std::endl;
}

void mainListStack()
{
	std::list<int> liste;
	
	liste.push_back(5);
	liste.push_back(17);
	liste.push_back(3);
	liste.push_back(5);
	liste.push_back(737);
	liste.push_back(0);
	for (std::list<int>::iterator it = liste.begin(); it != liste.end(); ++it)
		std::cout << *it << std::endl;
}

int main()
{
	std::cout << "=========MUTANT STACK=========" << std::endl;
	mainMutantStack();
	std::cout << "=============LIST=============" << std::endl;
	mainListStack();
	std::cout << "==============================" << std::endl;
	return 0;
}