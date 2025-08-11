# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 18:33:41 by fileonar          #+#    #+#              #
#    Updated: 2025/08/11 16:18:07 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp

HEADERS = Zombie.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIB) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re