/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:30:23 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 15:49:54 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template < typename T>
MutantStack<T>::MutantStack(){
	
};

template < typename T>
MutantStack<T>::MutantStack(const MutantStack &src){
	
};

template < typename T>
MutantStack<T>::~MutantStack(){
	
};

template < typename T>
MutantStack<T>	&MutantStack<T>::operation=(const MutantStack<T> &rhs){
	
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
};

template < typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
};
