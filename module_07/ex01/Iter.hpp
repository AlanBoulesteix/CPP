/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:43:37 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/18 17:20:32 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template < typename T, typename F >
void	iter(T *array, size_t len, F func)
{
	if (!array)
	{
		std::cerr << "Array is a pointer null" << std::endl;
		return ;
	}
	for (size_t i = 0; i < len; ++i)
		func(array[i]);
};

template < typename T>
void	printArray(T data)
{
	std::cout << data << std::endl;
}

template < typename T>
void	incrementArray(T &data)
{
	data++;
}

class Personne {
	
	private :

		std::string		_name;
		int				_age;

		Personne();
		Personne &operator=(const Personne &rhs){(void)rhs; return (*this);};

	public:
		Personne(std::string name, int age): _name(name), _age(age){};
		Personne(const Personne &src): _name(src.getName()), _age(src.getAge()){};
		~Personne(){};
		std::string		getName() const { return (_name);};
		int				getAge() const { return (_age);};
		Personne		&operator++( void ){_age++; return(*this);};
		Personne 		&operator++( int ){Personne tmp(*this); ++_age;return(tmp);};
};

std::ostream& operator<<(std::ostream & o, Personne const & p){
	o << "Name: " << p.getName() << std::endl
		<< "Age: " << p.getAge();
	return (o);
};
