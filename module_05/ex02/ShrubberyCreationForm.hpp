/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:28:07 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 15:20:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :

		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& rhs);
		std::string	_target;
		
	public:

	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	
	void	execute(Bureaucrat const & executor) const;
};

#endif