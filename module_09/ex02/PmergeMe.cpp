/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:20:06 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/28 18:17:45 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isDigit(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

PmergeMe::PmergeMe(){
};

PmergeMe::PmergeMe(char **av): _timeVector(0), _timeList(0){
	int i = 1;
	int	nb;
	while (av[i])
	{
		if (isDigit(av[i]))
			_listInitiale.push_back(av[i]);
		else
			throw PmergeMe::WrongParameterException();
		nb = atoi(av[i]);
		if (nb < 0)
			throw PmergeMe::NegatifIntegerException();
		else 
		{
			_vectorInt.push_back(nb);
			_listInt.push_back(nb);
		}
		i++;
	}
	sortContainer(_vectorInt);
	sortContainer(_listInt);
};

PmergeMe::PmergeMe(const PmergeMe &src){
	(void)src;
};

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs){
	(void)rhs;
	return (*this);
};

PmergeMe::~PmergeMe(){

};
template <typename T>
void	PmergeMe::sortContainer(T &container){
	(void)container;
};

void	PmergeMe::before() const {
	std::string str = "Before:";
	
	for (size_t i = 0; i < _listInitiale.size(); i++)
		str+= (" " + _listInitiale[i]);
	std::cout << str << std::endl;
};

void	PmergeMe::after() const {
	std::cout << "After: " ;
	for (size_t i = 0; i < _vectorInt.size(); i++)
		std::cout << " " << _vectorInt[i];
	std::cout << std::endl;
};

void	PmergeMe::timeVector() const{
	std::cout <<"Time to process a range of " << _listInitiale.size() << " elements with std::vector : " << _timeVector << " us" << std::endl;
};

void	PmergeMe::timeList() const{
		std::cout <<"Time to process a range of " << _listInitiale.size() << " elements with std::list   : " << _timeList << " us" << std::endl;
};

const char *PmergeMe::WrongParameterException::what() const throw() {
	return ("Wrong parameter type. Only digit are allowed.");
};

const char *PmergeMe::NegatifIntegerException::what() const throw() {
	return ("Wrong parameter type. Only positif integer are allowed.");
};
