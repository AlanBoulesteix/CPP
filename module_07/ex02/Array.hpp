/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:40:27 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/18 19:19:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template < typename T >
class Array {
	private:
		T		*_array;
		size_t	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &src);
		~Array();
		Array	&operator=(const Array &rhs);
		T		&operator[](unsigned int index);
		size_t	size() const;
		class indexOutOfRange : public std::exception {
			virtual const char* what() const throw();
		};
};

#include "Array.tpp"