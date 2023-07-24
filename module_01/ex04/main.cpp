/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:17:22 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/24 14:31:42 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	errorManager(int mode){

	std::cerr << "\033[1;31mError:\033[0m" << std::endl;
	if (mode == ARG)
		std::cerr << "Usage: ./replace <file> <holder> <substitute>" << std::endl;
	else if (mode == EMPTY)
		std::cerr << "Holder can not be empty" << std::endl;
	else if (mode == INFILE)
		std::cerr << "Something went wrong with input file" << std::endl;
	else if (mode == OUTFILE)
		std::cerr << "Something went wrong with output file" << std::endl;
	return (1);
};

void	readFile(std::ifstream	*file, std::string *content){
	char	c;
	
	while ((c = (*file).get()) != EOF)
		*content += c;
};

void	writeAndReplace(std::ofstream *outfile, std::string content, 
	std::string holder, std::string substitute){
	size_t index = content.find(holder);
	int		i = 0;
	while(index != std::string::npos)
	{
		(*outfile) << content.substr(i, index - i);
		(*outfile) << substitute;
		i = index + holder.length();
		index = content.find(holder, index + holder.length());
	}
	(*outfile) << content.substr(i, content.length() - i);
};

int main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	outfile;
	std::string		holder;
	std::string		substitute;
	std::string		infileName;
	std::string		content;
	
	if (ac != 4)
		return (errorManager(ARG));
	holder = av[2];
	substitute = av[3];
	infileName = av[1];
	file.open(infileName.c_str());
	if (holder.empty())
		return (errorManager(EMPTY));
	if (!file.is_open())
		return (errorManager(INFILE));
	outfile.open((infileName + ".replace").c_str());
	if (!file.is_open())
		return (errorManager(OUTFILE));
	readFile(&file, &content);
	writeAndReplace(&outfile, content, holder, substitute);
	file.close();
}
