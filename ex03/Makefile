# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 17:01:39 by fefo              #+#    #+#              #
#    Updated: 2025/08/11 18:55:08 by fefo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = brain

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++17 -g

SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp 

HEADERS = HumanA.hpp \
		HumanB.hpp \
		Weapon.hpp

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