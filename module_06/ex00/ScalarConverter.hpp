/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:46:31 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/11 15:03:25 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>

class ScalarConverter {

	private:
		std::string	_att;
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		ScalarConverter	&operator=(const ScalarConverter& rhs);

	public:

		ScalarConverter(std::string attribut);
		~ScalarConverter();
		
		void	convert();
};

#endif