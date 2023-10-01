/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:20:06 by aboulest          #+#    #+#             */
/*   Updated: 2023/10/01 21:12:32 by alanboulest      ###   ########.fr       */
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
	T			mainContainer;
	int			index = 0;
	int			lenPointeur = container.size() % 2 == 0 ? container.size()/2 : (container.size()/2 +) 1;
	PairOfInt	*listOfPair = new PairOfInt[lenPointeur];
	
	for (size_t i = 0; i < container.size(); i += 2)
	{
		if ( container[i + 1] == container.end())
			listOfPair[index].setNumber(containe[i], -1);
		else if (container[i] > container[i + 1])
			listOfPair[index].setNumber(containe[i + 1], container[i]);
		else
			listOfPair[index].setNumber(containe[i], container[i + 1]);
		index++;
	}
	
	delete [] PairOfInt;
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


/**************************CLASS PAIR OF INT*********************/

PairOfInt::PairOfInt(){
	
};

PairOfInt::~PairOfInt(){
	
};

PairOfInt::PairOfInt(const PairOfInt &src){
	(void)src;
};

PairOfInt	&PairOfInt::operator=(const PairOfInt &rhs){
	(void)rhs;
	return (*this);
};

int		PairOfInt::getSmall() const{
	return (_small);
};

int		PairOfInt::getBig() const{
	return (_big);
};

int		PairOfInt::getIndex() const{
	return (_indexInMain);
};

void	PairOfInt::setNumber(int small, int big){
	_small = small;
	_big = big;
};

void	PairOfInt::setIndex(int indexInMain){
	_indexInMain = indexInMain;
};
