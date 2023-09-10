/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:00:22 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/10 18:52:16 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

    public:
    
    Intern();
    Intern(const Intern &src);
    ~Intern();
    Intern &operator=(const Intern &rhs);
    AForm*  makeForm(std::string name, std::string target);

    class FormNotFind : public std::exception {
        public:
				virtual const char* what() const throw();
    };
};

#endif