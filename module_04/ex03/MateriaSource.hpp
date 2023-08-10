/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:48:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/10 11:37:45 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MATERIA_MAX 4

class MateriaSource : virtual public IMateriaSource
{

	public:
	
		MateriaSource();
		MateriaSource(const MateriaSource &original);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria*	createMateria(std::string const &type);
		int					getNbMaterias() const;
		AMateria**			getSavedMateria() const;
		void				addSavedMateria(AMateria *m);
		int					getNbSavedMateria() const;
		int					getSizeMemory() const;

	private:
	
		AMateria*	_materias[MATERIA_MAX];
		int			_nbMaterias;
		AMateria**	_savedMaterias;
		int			_nbSavedMaterias;
		int			_sizeMemory;
};

#endif