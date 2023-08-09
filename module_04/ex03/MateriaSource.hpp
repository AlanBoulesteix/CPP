/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:48:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/09 15:01:18 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

# define MATERIA_MAX 4

class MateriaSource : virtual public IMateriaSource{

	public:
	
		MateriaSource();
		MateriaSource(const MateriaSource &original);
		virtual ~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &rhs);
		
		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(std::string const & type);
		int					getNbMaterias()  const;

	private:
	
		AMateria	*_materias[MATERIA_MAX];
		int			_nbMaterias;
};

#endif