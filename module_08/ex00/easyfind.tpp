/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:05:41 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/21 10:40:16 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char	*MissingValueException::what() const throw()
{
	return ("Value not find");
}

template < typename T >
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator	rtn;
	
	rtn = find(container.begin(), container.end(), value);
	if (rtn == container.end())
		throw MissingValueException();
	else
		return (rtn);
};