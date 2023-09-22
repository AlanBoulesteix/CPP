/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:30:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 17:23:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template < typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {
	
};

template < typename T>
MutantStack<T>::MutantStack(const MutantStack &src): std::stack<T>(src){
	
};

template < typename T>
MutantStack<T>::~MutantStack(){
	
};

template < typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &rhs){
	if (this != rhs)
		this = std::stack<T>::operator=(rhs);
	return (*this);
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
};
