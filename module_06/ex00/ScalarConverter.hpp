/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:46:31 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 13:03:52 by aboulest         ###   ########.fr       */
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
# define FULL_FLAG		15

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