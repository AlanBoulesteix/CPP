/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 08:08:35 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/11 09:54:16 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){

};

Intern::Intern(const Intern &src){
    (void)src;
};

Intern::~Intern(){

};

Intern &Intern::operator=(const Intern &rhs){
    (void)rhs;
    return (*this);
};

AForm*  Intern::makeForm(std::string name, std::string target){
    std::string formsName[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    AForm*   forms[3] = {
		new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target)
    };
    AForm *ret = NULL;
    
    for (int i = 0; i < 3; i++)
    {
        if (name == formsName[i])
            ret = forms[i];
        else
            delete forms[i];
    }
    if (ret != NULL)
    {
        std::cout << "Intern creates " << ret->getName() << std::endl;
        return (ret);
    }
    else
        throw Intern::FormNotFind();
};

const char* Intern::FormNotFind::what() const throw(){
    return ("Form does't exist");
};