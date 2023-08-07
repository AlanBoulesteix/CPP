/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:33 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 13:52:13 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal{

	public:
	
	Animal( void );
	Animal( std::string name );
	Animal( const Animal &original );
	virtual ~Animal( void );

	Animal&	operator=( const Animal &rhs );
	
	virtual void			makeSound( void ) const = 0;
	virtual std::string		getType( void ) const = 0;
	virtual Brain			*getBrain( void ) const = 0;

	protected:

	std::string		_type;

};

#endif