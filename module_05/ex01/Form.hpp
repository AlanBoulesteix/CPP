/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:51:27 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/07 13:49:26 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <typeinfo>
#include "Bureaucrat.hpp"

class Form {

	private:

		std::string const	_name;
		bool				_signed;
		int const			_gradeForSign;
		int const			_gradeForExc;

	public:

		Form();
		~Form();
		Form(std::string const name, bool state, int const gradeForSign, int const gradeForExc);
		Form(Form const& src);
		Form	&operator=(Form const& rhs);

		std::string const	getName(void) const;
		bool 				getState(void) const;
		int const			getLvlforSign(void) const;
		int const			getLvlforExc(void) const;
		void				beSigned(Bureaucrat signatory);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& o, Form const& form);

#endif