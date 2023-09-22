/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:23:24 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 17:22:14 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>
#include <algorithm>

template < typename T >
class MutantStack : public std::stack<T> 
{

	public:

		MutantStack();
		MutantStack(const MutantStack &src);
		~MutantStack();
		MutantStack	&operator=(const MutantStack &rhs);
		
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin();
		iterator	end();

};

#include "MutantStack.tpp"