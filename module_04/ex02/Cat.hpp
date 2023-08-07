/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:18:42 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 11:34:50 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
	
	Cat( void );
	Cat( const Cat &original );
	~Cat( void );

	Cat&	operator=( const Cat &rhs );

	virtual void	makeSound( void ) const ;
	virtual Brain	*getBrain( void ) const ;
	
	private:

	Brain*	_brain;
};

#endif