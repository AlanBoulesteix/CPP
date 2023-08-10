/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:52:15 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:35:23 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"

# define MATERIA_MAX 4

class	Character : public ICharacter{
	
	public:

		Character(std::string name);
		Character(const Character &original);
		virtual ~Character();
		
		Character   &operator=(const Character &rhs);
		
		virtual std::string const	&getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		int							getNbMateria() const;
		void						printMateria() const;
	
	private:
	
		std::string		_name;
		AMateria*		_materias[MATERIA_MAX];
		int				_nbMaterias;
};

#endif