/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:23:24 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 15:49:37 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>

template < typename T >
class MutantStack : virtual public std::stack<T> {
	public:

		MutantStack();
		MutantStack(const MutantStack &src);
		~MutantStack();
		MutantStack	&operation=(const MutantStack &rhs);
		
		typename MutantStack<T>::iterator	begin();
		typename MutantStack<T>::iterator	end();

};

#include "MutantStack.tpp"