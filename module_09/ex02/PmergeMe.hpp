/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:13:19 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/28 18:17:12 by aboulest         ###   ########.fr       */
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