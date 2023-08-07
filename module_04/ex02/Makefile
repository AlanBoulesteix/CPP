# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 16:46:22 by aboulest          #+#    #+#              #
#    Updated: 2023/08/06 23:04:56 by alanboulest      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Polymorphisme

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC		:= 	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \

INCLUDE	:= Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Brain.hpp \

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