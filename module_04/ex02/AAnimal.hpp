/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:28:33 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/07 17:26:20 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal{

	public:
	
	AAnimal( void );
	AAnimal( std::string name );
	AAnimal( const AAnimal &original );
	virtual ~AAnimal( void );

	AAnimal&	operator=( const AAnimal &rhs );
	
	virtual void			makeSound( void ) const = 0;
	virtual	Brain*			getBrain(void) const = 0;
	virtual std::string		getType( void ) const;
	
	protected:

	std::string		_type;

};

#endif