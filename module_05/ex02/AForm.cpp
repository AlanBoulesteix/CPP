/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:13:10 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 15:17:38 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::ostream&	operator<<(std::ostream& o, AForm const& form){
	o << form.getName() << "'s Aform " << std::endl
		<< "state: " << (form.getState() ? "Yes" : "No") << std::endl
		<< "Grade for signature : " << form.getLvlforSign() << std::endl
		<< "Grade for execution : " << form.getLvlforExc();
	return (o);
};

AForm::AForm(): _name("default"), _signed(false), _gradeForSign(150), _gradeForExc(150){
	#ifdef DEBUG
		std::cout << "AForm Default Constructor called" << std::endl;
	#endif
};

AForm::~AForm(){
	#ifdef DEBUG
		std::cout << "AForm Default Destructor called" << std::endl;
	#endif
};

AForm::AForm(std::string const name, bool state, int const gradeForSign, int const gradeForExc)
: _name(name), _signed(state), _gradeForSign(gradeForSign), _gradeForExc(gradeForExc){
	if (gradeForSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeForSign < 1)
		throw AForm::GradeTooHighException();
	if (gradeForExc > 150)
		throw AForm::GradeTooLowException();
	else if (gradeForExc < 1)
		throw AForm::GradeTooHighException();
};


AForm::AForm(AForm const& src)
: _name(src.getName()),
_signed(src.getState()),
_gradeForSign(src.getLvlforSign()),
_gradeForExc(src.getLvlforExc())
{
	#ifdef DEBUG
		std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	#endif
	
};

AForm	&AForm::operator=(AForm const& rhs){
	#ifdef DEBUG
		std::cout << "Bureaucrat Assignation constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_signed = rhs.getState();
	return (*this);
};

std::string const	AForm::getName(void) const{
	return(_name);
};

bool 	AForm::getState(void) const{
	return (_signed);
};

int	AForm::getLvlforSign(void) const{
	return (_gradeForSign);
};

int	AForm::getLvlforExc(void) const{
	return (_gradeForExc);
};

void		AForm::beSigned(Bureaucrat signatory){
	if (_gradeForSign >= signatory.getGrade())
		_signed = true;
	else
		throw AForm::GradeTooLowException();
};

void		AForm::execute(Bureaucrat const &executor) const
{
	(void)executor;
}

const char* AForm:: GradeTooHighException::what() const throw(){
	return ("This grade is too high");
};

const char* AForm:: GradeTooLowException::what() const throw(){
	return ("This grade is too low");
};
