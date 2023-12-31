/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:13:19 by aboulest          #+#    #+#             */
/*   Updated: 2023/10/02 16:23:55 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <sys/time.h>
# include <iomanip>
# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>

class PmergeMe {

	private:
		
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe	&operator=(const PmergeMe &rhs);

		template <typename T>
		void	sortContainer(T &container);
		template <typename T>
		void	binarySearchInsertion(T& container, int element);
		
		std::vector<std::string>		_listInitiale;
		std::vector<int>				_vectorInt;
		std::deque<int>					_dequeInt;
		long long int					_timeVector;
		long long int					_timeDeque;

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

long long int	getTime();