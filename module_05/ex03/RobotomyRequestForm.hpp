/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:28:07 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 15:20:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private :

		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const& rhs);
		std::string	_target;
		
	public:

	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	
	void	execute(Bureaucrat const & executor) const;
};

#endif