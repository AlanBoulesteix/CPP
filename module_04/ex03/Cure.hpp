/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:57:25 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:18:52 by aboulest         ###   ########.fr       */
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
		
		virtual void	use(ICharacter& target);
};

#endif