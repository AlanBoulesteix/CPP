/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:33 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 17:31:39 by aboulest         ###   ########.fr       */
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
	
	virtual void			makeSound( void ) const;
	virtual std::string		getType( void ) const;

	protected:

	std::string		_type;

};

#endif