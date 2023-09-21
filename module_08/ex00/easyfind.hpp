/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:00:45 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/21 10:45:35 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

class MissingValueException : public std::exception {
	public:
		virtual const char *what() const throw();
};

template < typename T >
typename T::iterator	easyfind(T &container, int value);

#include "easyfind.tpp"