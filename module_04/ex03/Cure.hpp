/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:57:25 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:34:57 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

	public:
		Cure();
		Cure(const Cure &original);
		~Cure();
		
		Cure			&operator=(const Cure &rhs);
		
		virtual void		use(ICharacter& target);
		virtual AMateria	*clone() const;
};

#endif