# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/08/08 15:24:01 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Polymorphisme

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -MMD -std=c++98

SRC		:= 	main.cpp \
			ICharacter.cpp \
			Character.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \

OBJ		:=$(SRC:.cpp=.o)
DEPS	:=$(SRC:.cpp=.d)

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

-include $(DEPS)