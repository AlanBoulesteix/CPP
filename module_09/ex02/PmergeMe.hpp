/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:13:19 by aboulest          #+#    #+#             */
/*   Updated: 2023/10/01 12:11:20 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class PmergeMe {

	private:
		
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe	&operator=(const PmergeMe &rhs);

		template <typename T>
		void	sortContainer(T &container);

		std::vector<std::string>		_listInitiale;
		std::vector<int>				_vectorInt;
		std::list<int>					_listInt;
		int								_timeVector;
		int								_timeList;

	public:

		PmergeMe(char **av);
		~PmergeMe();

		void	before() const;
		void	after() const;
		void	timeVector() const;
		void	timeList() const;

		class WrongParameterException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class NegatifIntegerException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

class	PairOfInt {

	private :

		int		_small;
		int		_big;
		int		_indexInMain;

		PairOfInt(const PairOfInt &src);
		PairOfInt	&operator=(const PairOfInt &rhs);

	public :

		PairOfInt();
		~PairOfInt();

		int		getSmall() const;
		int		getBig() const;
		int		getIndex() const;
		void	setNumber(int small, int big);
		void	setIndex(int indexInMain);
};
