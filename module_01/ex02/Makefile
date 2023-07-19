# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/07/19 15:27:29 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= printAddress

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= 	main.cpp \

OBJ		:=$(SRC:.cpp=.o)

###########################################################

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re