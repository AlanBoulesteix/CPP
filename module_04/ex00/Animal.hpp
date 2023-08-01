/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:33 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 13:23:07 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{

	public:
	
	Animal( void );
	Animal( std::string name );
	Animal( const Animal &original );
	~Animal( void );

	Animal&	operator=( const Animal &rhs );

	protected:

	std::string		getType( void );

	std::string		_type;

};

#endif