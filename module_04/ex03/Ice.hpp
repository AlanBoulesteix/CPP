/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:55:18 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:36:25 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

	public:

		Ice();
		Ice(const Ice &original);
		~Ice();
		
		Ice	&operator=(const Ice &rhs);
		
		virtual void		use(ICharacter& target);
		virtual AMateria*	clone() const;
};

#endif