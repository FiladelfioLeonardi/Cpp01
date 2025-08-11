# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 16:24:01 by fefo              #+#    #+#              #
#    Updated: 2025/08/11 18:55:14 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	main.cpp

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