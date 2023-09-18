/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:53:02 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/18 17:21:12 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	upperArrayChar(char &str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
}

int main()
{
	std::cout << "=========ARRAY CHAR========" << std::endl;
	char array[] = "bonjour";
	std::cout << array << std::endl;
	iter(array, 7, upperArrayChar);
	std::cout << array << std::endl;

	std::cout << "=========ARRAY INT=========" << std::endl;
	int	array2[] = {0, 1, 42, 78};
	iter<int, void(*)(int)>(array2, 4, printArray<int>);
	std::cout << "=======================" << std::endl;
	iter<int, void(*)(int&)>(array2, 4, incrementArray<int&>);
	iter<int, void(*)(int)>(array2, 4, printArray<int>);
	
	std::cout << "=======ARRAY CLASS========" << std::endl;
	Personne p[2] = {Personne("Juventz", 28), Personne("Alix", 30)};
	iter<Personne, void(*)(Personne)>(p, 2, printArray<Personne>);
	iter<Personne, void(*)(Personne&)>(p, 2, incrementArray<Personne&>);
	iter<Personne, void(*)(Personne)>(p, 2, printArray<Personne>);
	return (0);
}
