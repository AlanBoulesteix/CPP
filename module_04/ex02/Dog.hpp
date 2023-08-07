/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:22:22 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 11:34:38 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:
	
	Dog( void );
	Dog( const Dog &original );
	~Dog( void );

	Dog&	operator=( const Dog &rhs );

	virtual void	makeSound( void ) const ;
	virtual Brain	*getBrain( void ) const ;

	private:

	Brain*	_brain;
};

#endif