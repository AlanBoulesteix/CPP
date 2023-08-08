/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:26:00 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:39:19 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria{
	
	protected:	
		std::string		_type;	

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &original);
		~AMateria();
		
		AMateria	&operator=(const AMateria &rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif