# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/08/08 22:24:41 by alanboulest      ###   ########.fr        #
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

debug: FLAGS += -D DEBUG
debug: re

clean:
	rm -rf $(OBJ)
	rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re

-include $(DEPS)