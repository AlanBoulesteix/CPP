/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 07:38:52 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/10 07:41:53 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :

		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const& rhs);
		std::string	_target;
		
	public:

	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	
	void	execute(Bureaucrat const & executor) const;
};

#endif