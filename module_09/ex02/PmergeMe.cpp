/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:20:06 by aboulest          #+#    #+#             */
/*   Updated: 2023/10/03 11:23:27 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long long int getTime()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000 + tv.tv_usec);
}

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

PmergeMe::PmergeMe(char **av){
	int 			i = 1;
	int				nb;
	long long int	start;	

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
			_dequeInt.push_back(nb);
		}
		i++;
	}
	start = getTime();
	sortContainer(_vectorInt);
	_timeVector = getTime() - start;
	start = getTime();
	sortContainer(_dequeInt);
	_timeDeque = getTime() - start;
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

void	insertNumberOfJacob(std::vector<int> &Jacobsthal)
{
	Jacobsthal.push_back(0);
	Jacobsthal.push_back(2);
	Jacobsthal.push_back(4);
	Jacobsthal.push_back(10);
	Jacobsthal.push_back(20);
	Jacobsthal.push_back(42);
	Jacobsthal.push_back(84);
	Jacobsthal.push_back(170);
	Jacobsthal.push_back(340);
	Jacobsthal.push_back(682);
	Jacobsthal.push_back(1364);
	Jacobsthal.push_back(2730);
	Jacobsthal.push_back(5460);
	Jacobsthal.push_back(10922);
	Jacobsthal.push_back(21844);
	Jacobsthal.push_back(43690);
	Jacobsthal.push_back(87380);
	Jacobsthal.push_back(174762);
	Jacobsthal.push_back(349524);
	Jacobsthal.push_back(699050);
	Jacobsthal.push_back(1398100);
	Jacobsthal.push_back(2796202);
	Jacobsthal.push_back(5592404);
	Jacobsthal.push_back(11184810);
	Jacobsthal.push_back(22369620);
	Jacobsthal.push_back(44739242);
	Jacobsthal.push_back(89478484);
	Jacobsthal.push_back(178956970);
	Jacobsthal.push_back(357913940);
	Jacobsthal.push_back(715827882);
	Jacobsthal.push_back(1431655764);
	Jacobsthal.push_back(2147483647);
}

template <typename T>
void	PmergeMe::binarySearchInsertion(T& main, int element){
	int left = 0;
	int right = main.size() - 1;
	int middle;
	while (left <= right)
	{
		middle = left + (right - left) / 2;
		if (element < main[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	main.insert(main.begin() + left, element);
};

template <typename T>
void	PmergeMe::sortContainer(T &container){
	std::vector<int> Jacobsthal;
	insertNumberOfJacob(Jacobsthal);
	
	for (size_t i = 0; i < container.size() - 1; i += 2)
		if (container[i] > container[i + 1])
			std::swap(container[i], container[i + 1]);
	if (container.size() > 2)
	{
		T pairs;
		for (size_t i = 0; i < container.size(); i += 2)
			pairs.push_back(container[i]);
		sortContainer(pairs);
		T main = pairs;
		T panding;
		for (size_t i = 1; i < container.size(); i += 2)
			panding.push_back(container[i]);
		int	sizeMax = panding.size();
		for (int index = 0; index < sizeMax; index++)
		{
			int j = 0;
			int finalIndex;
			while (index > Jacobsthal[j])
				j++;
			if (j != 0)
			{
				if (sizeMax - 1 <= Jacobsthal[j])
					finalIndex = sizeMax - (index - Jacobsthal[j - 1]);
				else
					finalIndex = Jacobsthal[j] + 1 - (index - Jacobsthal[j - 1]); 
			}
			else
				finalIndex = 0;
			binarySearchInsertion(main, panding[finalIndex]);
		}
		container = main;
	}
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
		std::cout <<"Time to process a range of " << _listInitiale.size() << " elements with std::deque   : " << _timeDeque << " us" << std::endl;
};

const char *PmergeMe::WrongParameterException::what() const throw() {
	return ("Wrong parameter type. Only digit are allowed.");
};

const char *PmergeMe::NegatifIntegerException::what() const throw() {
	return ("Wrong parameter type. Only positif integer are allowed.");
};
