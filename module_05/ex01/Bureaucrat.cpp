/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:09:16 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/06 14:20:48 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& o, Bureaucrat const& bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (o);
};

Bureaucrat::Bureaucrat(){
	#ifdef DEBUG
		std::cout << "Bureaucrat Default Constructor called" << std::endl;
	#endif
};

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name) {
	#ifdef DEBUG
		std::cout << "Bureaucrat Default Constructor W/ Param called " << std::endl;
	#endif
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		_grade = grade;
};

Bureaucrat::~Bureaucrat(){
	#ifdef DEBUG
		std::cout << "Bureaucrat Default Destructor called" << std::endl;
	#endif
};

Bureaucrat::Bureaucrat(Bureaucrat const &src):_name(src._name), _grade(src._grade){
	#ifdef DEBUG
		std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	#endif
};

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs){
	#ifdef DEBUG
		std::cout << "Bureaucrat Assignation constructor called" << std::endl;
	#endif
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
};

std::string const	Bureaucrat::getName(void) const{
	return (_name);
};

int	Bureaucrat::getGrade(void) const{
	return (_grade);	
};

void	Bureaucrat::incrementGrade(void){
	if (_grade == 1)
		throw (GradeTooHighException());
	else
		_grade--;
};

void	Bureaucrat::decrementGrade(void){
	if (_grade == 150)
		throw (GradeTooLowException());
	else
		_grade++;
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("This bureaucrate already this as the best grade");
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("This bureaucrate already this as the worst grade");
};