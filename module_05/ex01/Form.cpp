/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:13:10 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 10:52:39 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& o, Form const& form){
	o << form.getName() << "'s form " << std::endl
		<< "state: " << (form.getState() ? "Yes" : "No") << std::endl
		<< "Grade for signature : " << form.getLvlforSign() << std::endl
		<< "Grade for execution : " << form.getLvlforExc();
	return (o);
};

Form::Form(): _name("default"), _signed(false), _gradeForSign(150), _gradeForExc(150){
	#ifdef DEBUG
		std::cout << "Form Default Constructor called" << std::endl;
	#endif
};

Form::~Form(){
	#ifdef DEBUG
		std::cout << "Form Default Destructor called" << std::endl;
	#endif
};

Form::Form(std::string const name, bool state, int const gradeForSign, int const gradeForExc)
: _name(name), _signed(state), _gradeForSign(gradeForSign), _gradeForExc(gradeForExc){
	if (gradeForSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeForSign < 1)
		throw Form::GradeTooHighException();
	if (gradeForExc > 150)
		throw Form::GradeTooLowException();
	else if (gradeForExc < 1)
		throw Form::GradeTooHighException();
};


Form::Form(Form const& src)
: _name(src.getName()),
_signed(src.getState()),
_gradeForSign(src.getLvlforSign()),
_gradeForExc(src.getLvlforExc())
{
	#ifdef DEBUG
		std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	#endif
	
};

Form	&Form::operator=(Form const& rhs){
	#ifdef DEBUG
		std::cout << "Bureaucrat Assignation constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_signed = rhs.getState();
	return (*this);
};

std::string const	Form::getName(void) const{
	return(_name);
};

bool 	Form::getState(void) const{
	return (_signed);
};

int	Form::getLvlforSign(void) const{
	return (_gradeForSign);
};

int	Form::getLvlforExc(void) const{
	return (_gradeForExc);
};

void		Form::beSigned(Bureaucrat signatory){
	if (_gradeForSign >= signatory.getGrade())
		_signed = true;
	else
		throw Form::GradeTooLowException();
};

const char* Form:: GradeTooHighException::what() const throw(){
	return ("This grade is too high");
};

const char* Form:: GradeTooLowException::what() const throw(){
	return ("This grade is too low");
};
