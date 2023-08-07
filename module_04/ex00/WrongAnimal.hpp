/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:43 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/07 14:03:48 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal {
    public:

    WrongAnimal();
    WrongAnimal( std::string type );
    WrongAnimal(const WrongAnimal &original);
    virtual ~WrongAnimal();
    
    WrongAnimal& operator=( const WrongAnimal &rhs);
    
	std::string	getType( void );
	void		makeSound( void ) const;
	
	protected:
  
    std::string   _type;  
};

#endif