/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:56:14 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/18 20:00:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Array.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

std::string	wordGenerator(void)
{
	std::string	listWord[6] = {
		"Bonjour", 
		"applaudir",
		"triangle",
		"crustacé",
		"intégrale",
		"violoncelle"};
	return (listWord[rand()% 6]);
}

int main()
{
	Array<int>	a(10);
	srand(time(NULL));
	try {
		for (int i = 0; i < 10; ++i)
			a[i] =  rand() % 500;
		for (int i = 0; i < 11; ++i)
			std::cout << a[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===============================" << std::endl;
		Array<std::string> txt(5);
	try {
		for (int i = 0; i < 5; ++i)
			txt[i] = wordGenerator();
		for (int i = 0; i < 6; ++i)
			std::cout << txt[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===============================" << std::endl;
	Array<Awesome>	array(5);
	try {
		for (int i = 0; i < 6; ++i)
			std::cout << array[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}