/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:51:27 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 14:21:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <typeinfo>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeForSign;
		const int			_gradeForExc;

	public:

		AForm();
		virtual ~AForm();
		AForm(std::string const name, bool state, int const gradeForSign, int const gradeForExc);
		AForm(AForm const& src);
		AForm	&operator=(AForm const& rhs);

		std::string const	getName(void) const;
		bool 				getState(void) const;
		int					getLvlforSign(void) const;
		int					getLvlforExc(void) const;
		void				beSigned(Bureaucrat signatory);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& o, AForm const& AForm);

#endif