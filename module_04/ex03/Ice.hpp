/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:55:18 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:38:46 by alanboulest      ###   ########.fr       */
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
		
		Ice				&operator=(const Ice &rhs);
		
		virtual void		use(ICharacter& target);
		virtual AMateria	*clone() const;
};

#endif