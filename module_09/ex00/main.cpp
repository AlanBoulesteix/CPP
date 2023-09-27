/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:29:52 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/27 18:05:15 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	isDigitStr(std::string str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isdigit(str[i]) && str[i] != '.')
			return (false);
	}
	return (true);
}

bool isDateValid(int year, int month, int day)
{
    bool	isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int		maxDays = 31;

    if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
        return (false);
    if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDays = 30;
    else if (month == 2)
        maxDays = isLeapYear ? 29 : 28;
    return (day <= maxDays);
}

bool	isFormatDateOk(std::string sub)
{
	int		year;
	int		month;
	int		day;
	int		indexFirstSep;
	int		indexSecondeSep;
	
	if (sub.length() != 11)
		return (false);
	indexFirstSep = sub.find("-");
	year = atoi(sub.substr(0, indexFirstSep).c_str());
	indexSecondeSep = sub.substr(indexFirstSep + 1, sub.npos).find("-");
	month = atoi(sub.substr(indexFirstSep + 1, indexSecondeSep).c_str());
	day = atoi(sub.substr(indexSecondeSep + indexFirstSep + 2, sub.npos).c_str());
	return (isDateValid(year, month, day));
}
void	exchange(std::ifstream &walletFile, BitcoinExchange &btc)
{
	std::string		buffer;
	std::string		subDate;
	std::string		subNbBTC;
	int				indexSep;
	int				value;

	(void)btc;
	getline(walletFile, buffer);
	if (buffer != "date | value")
	{
		std::cout << "Error: bad header for input file" << std::endl;
		return ;
	}
	while (getline(walletFile, buffer))
	{
		indexSep = buffer.find("|");
		subDate = buffer.substr(0, indexSep);
		subNbBTC = buffer.substr(indexSep + 2, buffer.npos);
		if (!isFormatDateOk(subDate))
		{
			std::cout << "Error: bad input => " << subDate << std::endl;
			continue ;
		}
		if (!isDigitStr(subNbBTC))
		{
			std::cout << "Error: bad input => " << subNbBTC << std::endl;
			continue ;
		}
		try {
			value = btc.compute(subDate, atof(subNbBTC.c_str()));
			std::cout << subDate << "=> " << subNbBTC << " = " << value << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	try {
		BitcoinExchange		btc;
		std::ifstream		walletFile(av[1]);
		
		if(!walletFile.is_open())
		{
			std::cout << "Error: " << av[1] << ": could not open file." << std::endl;
			return (1);
		}
		exchange(walletFile, btc);
		walletFile.close();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}