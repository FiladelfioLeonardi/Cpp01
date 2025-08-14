# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 19:03:06 by fefo              #+#    #+#              #
#    Updated: 2025/08/11 19:17:22 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	main.cpp 

HEADERS = replace.hpp


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