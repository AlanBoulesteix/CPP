# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/08/09 16:31:40 by aboulest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= materia

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -MMD -std=c++98 -g3

SRC		:= 	main.cpp \
			Character.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \

OBJ_DIR := ./objs/
OBJ		:=$(SRC:.cpp=.o)

OBJ		:=$(addprefix $(OBJ_DIR), $(OBJ))
DEPS	:=$(OBJ:.o=.d)

###########################################################

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) 

$(OBJ_DIR)%.o: %.cpp $(OBJ_DIR)
	
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

debug: FLAGS += -D DEBUG
debug: re

clean:
	rm -rf $(OBJ_DIR)
# rm -rf $(OBJ)
# rm -rf $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re

-include $(DEPS)