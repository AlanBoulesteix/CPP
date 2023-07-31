# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/07/31 16:12:03 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= a.out

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= 	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \

INCLUDE	:=	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \

OBJ		:=$(SRC:.cpp=.o)

###########################################################

all: $(NAME)

$(NAME): $(OBJ) ${INCLUDE} 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re