/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:46:31 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/19 12:25:12 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>

# define CHAR_FLAG		1
# define INT_FLAG		2
# define FLOAT_FLAG		4
# define DOUBLE_FLAG	8
# define PSEUDO_FLAG	16
# define FULL_FLAG		31

class ScalarConverter {

	private:
		std::string	_att;
		ScalarConverter();
		ScalarConverter(const ScalarConverter& src);
		ScalarConverter	&operator=(const ScalarConverter& rhs);
		~ScalarConverter();

	public:

		static void		convert(std::string str);
};

#endif