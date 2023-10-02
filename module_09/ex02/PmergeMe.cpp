/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:20:06 by aboulest          #+#    #+#             */
/*   Updated: 2023/10/02 16:39:27 by aboulest         ###   ########.fr       */
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

void	insertNumberOfJacob(std::vector<int> &jacobList)
{
	jacobList.push_back(0);
    jacobList.push_back(2);
    jacobList.push_back(4);
    jacobList.push_back(10);
    jacobList.push_back(20);
    jacobList.push_back(42);
    jacobList.push_back(84);
    jacobList.push_back(170);
    jacobList.push_back(340);
    jacobList.push_back(682);
    jacobList.push_back(1364);
    jacobList.push_back(2730);
    jacobList.push_back(5460);
    jacobList.push_back(10922);
    jacobList.push_back(21844);
    jacobList.push_back(43690);
    jacobList.push_back(87380);
    jacobList.push_back(174762);
    jacobList.push_back(349524);
    jacobList.push_back(699050);
    jacobList.push_back(1398100);
    jacobList.push_back(2796202);
    jacobList.push_back(5592404);
    jacobList.push_back(11184810);
    jacobList.push_back(22369620);
    jacobList.push_back(44739242);
    jacobList.push_back(89478484);
    jacobList.push_back(178956970);
    jacobList.push_back(357913940);
    jacobList.push_back(715827882);
    jacobList.push_back(1431655764);
    jacobList.push_back(2147483647);
}

template <typename T>
void	PmergeMe::binarySearchInsertion(T& container, int element){
    int left = 0;
    int right = container.size() - 1;

    while (left <= right)
	{
        int middle = left + (right - left) / 2;
        if (element < container[middle])
            right = middle - 1;
        else
            left = middle + 1;
    }
    container.insert(container.begin() + left, element);
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
		int sizeTot = panding.size();
		for (int index = 0; index < sizeTot; index++)
		{
			int j = 0;
			int finalIndex;
			while (index > Jacobsthal[j])
				j++;
			if (j != 0)
			{
				if (sizeTot - 1 <= Jacobsthal[j])
					finalIndex = sizeTot - (index - Jacobsthal[j - 1]);
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
