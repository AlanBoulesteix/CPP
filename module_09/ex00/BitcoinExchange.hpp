/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:44:38 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/27 18:00:04 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <map>

class BitcoinExchange {

	private:

		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		void			fillBTCValue();
		std::string		findNearestDate(std::string date) const;

		std::map<std::string, float>	_btcValue;

	public:

		BitcoinExchange();
		~BitcoinExchange();

		float			compute(std::string date, float nbBTC);
		
		class OpenDataFailException: public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};
		class NbTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NbTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};
