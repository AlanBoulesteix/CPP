/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:52:15 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/08 22:17:58 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

# define MATERIA_MAX 4

class	Character : public ICharacter{
	
	public:

		Character(std::string name);
		Character(const Character &original);
		virtual ~Character();
		
		Character   &operator=(const Character &rhs);
		
		virtual std::string const	&getName();
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		int							getNbMateria() const;
		
	private:
	
		std::string	_name;
		AMateria	*_materias[MATERIA_MAX];
		int			_nbMaterias;
};

#endif