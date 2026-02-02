# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kadferna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/02 12:12:26 by kadferna          #+#    #+#              #
#    Updated: 2026/02/02 12:12:27 by kadferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CC = g++

INCLUDE_DIR = ./INCLUDES

SRCS_DIR = ./SRCS

INCLUDES = ${INCLUDE_DIR}/ClapTrap.hpp \
			${INCLUDE_DIR}/ScavTrap.hpp \

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  ${SRCS_DIR}/ClapTrap.cpp \
		${SRCS_DIR}/ScavTrap.cpp \
		${SRCS_DIR}/main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re