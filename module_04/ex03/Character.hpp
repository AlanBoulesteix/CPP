/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:52:15 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 15:38:33 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter{
	
	public:

		Character(std::string name);
		Character(const Character &original);
		virtual ~Character();
		
		virtual std::string const	&getName();
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		int							getNbMateria() const;
		
	private:
	
		std::string	_name;
		AMateria	_materias[4];
		int			_nbMateria;
};

#endif