/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:44:38 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/26 17:56:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <map>

class BitcoinExchange {

	private:

		std::map<std::string, float>	_map;

	public:

		BitcoinExchange();
		~BitcoinExchange();
	
}
