/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:43:16 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/27 18:00:32 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

BitcoinExchange::BitcoinExchange(){
	fillBTCValue();
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
	(void)src;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs){
	(void)rhs;
	return (*this);
};

BitcoinExchange::~BitcoinExchange(){

};

void	BitcoinExchange::fillBTCValue(){

		std::ifstream	btcValueFile("data.csv");
		std::string		buffer;
		std::string		sub;
		int 			indexSep;

		if (!btcValueFile.is_open())
			throw BitcoinExchange::OpenDataFailException();
		while(getline(btcValueFile, buffer))
		{
			indexSep = buffer.find(",");
			sub = buffer.substr(0, indexSep);
			_btcValue[sub] = atof(buffer.substr(indexSep + 1, buffer.length() - 1).c_str());
		}
		btcValueFile.close();
};

std::string		BitcoinExchange::findNearestDate(std::string date) const{
	int		year;
	int		month;
	int		day;
	int		yearNearest;
	int		monthNearest;
	int		dayNearest;
	

	year = atoi(date.substr(0, 4).c_str()) * 365;
	month = atoi(date.substr(5, 2).c_str()) * 30;
	day = atoi(date.substr(8, 2).c_str());
	for (std::map<std::string, float>::const_iterator it = _btcValue.begin(); it != _btcValue.end(); ++it)
	{
		yearNearest = atoi(it->first.substr(0, 4).c_str()) * 365;
		monthNearest = atoi(it->first.substr(5, 2).c_str()) * 30;
		dayNearest = atoi(it->first.substr(8, 2).c_str());
		if ( yearNearest + monthNearest + dayNearest < year + month + day)
			return (it->first);
	}
	return (date);
};

float	BitcoinExchange::compute(std::string date, float nbBTC) {
	if (nbBTC < 0)
		throw BitcoinExchange::NbTooLowException();
	if (nbBTC > 10000)
		throw BitcoinExchange::NbTooHighException();
	std::string		nearstDate;
	nearstDate = findNearestDate(date);
	return (_btcValue[nearstDate] * nbBTC);
};

const char* BitcoinExchange::OpenDataFailException::what() const throw(){
	return ("Open data.csv failed");
};

const char* BitcoinExchange::NbTooLowException::what() const throw(){
	return ("not a positive number.");
};

const char* BitcoinExchange::NbTooHighException::what() const throw(){
	return (" too large a number.");
};