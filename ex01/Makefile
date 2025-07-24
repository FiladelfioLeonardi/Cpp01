# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 18:33:41 by fileonar          #+#    #+#              #
#    Updated: 2025/07/24 16:46:12 by fileonar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp

HEADERS = Zombie.hpp

LIB = -I .
 
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIB) -o $@ $^

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re