/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:42:04 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/25 13:51:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

class RPN {
	private:

		std::stack<int>	_stack;
		
		RPN(const RPN &src);
		RPN	&operator=(const RPN &rhs);

	public:

		RPN();
		~RPN();
		
		void	addParam(int param);
		int		rpn();
		
		class WrongTypeErrorException : public std::exception {
			public :
				const char *what() const throw();
		};
		
		class ComputeErrorException : public std::exception {
			public :
				const char *what() const throw();
		};

};